#pragma once

#include <string>

#include "plugin.h"

std::string resolveLibraryName(const std::string name);

class PluginLoader {
 public:
  static IPlugin *load(const std::string name);
};
