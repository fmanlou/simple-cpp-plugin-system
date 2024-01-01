#include "testplugin.h"

#include <iostream>

#include "plugins/core/notify/notifyplugin.h"
#include "pluginsystem.h"

TestPlugin::TestPlugin() {
  std::cout << "Create test plugin: " << this << std::endl;
}

TestPlugin::~TestPlugin() {
  std::cout << "Destroy test plugin: " << this << std::endl;
}

int TestPlugin::id() const { return 1; }

void TestPlugin::init() {
  auto plugin = dynamic_cast<NotifyPlugin *>(pluginSystem_->getPlugin(0));
  if (plugin) {
    plugin->notify("Message from test plugin.");
  }
}

IPlugin *createTestPlugin() {
  static TestPlugin plugin;
  return &plugin;
}