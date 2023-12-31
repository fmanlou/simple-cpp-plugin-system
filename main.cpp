#include <dlfcn.h>

#include <cassert>
#include <iostream>

#include "plugin.h"

int main() {
  void *library = dlopen("libplugin.so", RTLD_LAZY);
  if (!library) {
    std::cout << "open library failed\n";
  }

  GetPluginFunc getPluginFunc =
      reinterpret_cast<GetPluginFunc>(dlsym(library, "getPlugin"));

  if (!getPluginFunc) {
    std::cout << "resolve GetPluginFunc failed.\n";
    dlclose(library);
    return -1;
  }

  auto plugin = getPluginFunc();

  assert(plugin->id() == 0);

  return 0;
}