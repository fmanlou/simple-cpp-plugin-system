#include "pluginsystem.h"

#include "pluginloader.h"

void PluginSystem::loadPlugins() {
  auto plugin = PluginLoader::load("libNotifyPlugin.so");
  plugin->setPluginSystem(this);
  if (plugin) {
    plugins_.emplace(plugin->id(), plugin);
  }
}

IPlugin* PluginSystem::getPlugin(int id) {
  auto iter = plugins_.find(id);
  if (iter != plugins_.end()) {
    return iter->second;
  }

  return nullptr;
}