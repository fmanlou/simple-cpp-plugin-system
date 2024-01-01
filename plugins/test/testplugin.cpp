#include "testplugin.h"

#include <iostream>

#include "pluginsystem.h"

TestPlugin::TestPlugin() {
  std::cout << "Create test plugin: " << this << std::endl;
}

TestPlugin::~TestPlugin() {
  std::cout << "Destroy test plugin: " << this << std::endl;
}

int TestPlugin::id() const { return 1; }

void TestPlugin::init() { std::cout << pluginSystem_->getPlugin(0); }

IPlugin *createTestPlugin() {
  static TestPlugin plugin;
  return &plugin;
}