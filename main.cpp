#include <dlfcn.h>

#include <cassert>
#include <iostream>

#include "plugin.h"

int main() {
  void *library = dlopen("libNotifyPlugin.so", RTLD_LAZY);
  if (!library) {
    std::cout << "open library failed\n";
    return -1;
  }

  CreatePluginFunc createPluginFunc =
      reinterpret_cast<CreatePluginFunc>(dlsym(library, "createNotifyPlugin"));

  if (!createPluginFunc) {
    std::cout << "Resolve createPluginFunc failed.\n";
    dlclose(library);
    return -1;
  }

  auto plugin = createPluginFunc();

  assert(plugin->id() == 0);

  dlclose(library);

  return 0;
}