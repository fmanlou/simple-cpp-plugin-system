#include "pluginloader.h"

#include <dlfcn.h>

#include <iostream>

std::string resolveLibraryName(const std::string name) {
  size_t libPos = name.find("lib");
  size_t soPos = name.find(".so");
  return name.substr(libPos + 3, soPos - (libPos + 3));
}

IPlugin *PluginLoader::load(const std::string name) {
  void *library = dlopen(name.c_str(), RTLD_LAZY);
  if (!library) {
    std::cout << "open library failed\n";
    return nullptr;
  }

  std::string funcName = "create" + resolveLibraryName(name);

  CreatePluginFunc createPluginFunc =
      reinterpret_cast<CreatePluginFunc>(dlsym(library, funcName.c_str()));

  if (!createPluginFunc) {
    std::cout << "Resolve createPluginFunc failed.\n";
    dlclose(library);
    return nullptr;
  }

  return createPluginFunc();
}