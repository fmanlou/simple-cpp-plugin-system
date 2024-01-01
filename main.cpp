#include <dlfcn.h>

#include <cassert>
#include <iostream>

#include "pluginloader.h"

int main() {
  PluginLoader::load("libNotifyPlugin.so");
  return 0;
}