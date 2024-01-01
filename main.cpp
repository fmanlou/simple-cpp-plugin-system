#include <dlfcn.h>

#include <cassert>
#include <iostream>

#include "plugin.h"

int main() {
  void *library = dlopen("libplugin.so", RTLD_LAZY);
  if (!library) {
    std::cout << "open library failed\n";
  }

  CreatePluginFunc createPluginFunc =
      reinterpret_cast<CreatePluginFunc>(dlsym(library, "createPlugin"));

  if (!createPluginFunc) {
    std::cout << "resolve createPluginFunc failed.\n";
    dlclose(library);
    return -1;
  }

  auto plugin = createPluginFunc();

  assert(plugin->id() == 0);

  dlclose(library);

  return 0;
}