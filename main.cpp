#include "pluginsystem.h"

IPluginSystem *gPluginSystem{nullptr};

int main() {
  PluginSystem pluginSystem;

  gPluginSystem = &pluginSystem;

  pluginSystem.loadPlugins();
  return 0;
}