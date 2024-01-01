#include "notifyplugin.h"

#include <iostream>

NotifyPlugin::NotifyPlugin() {
  std::cout << "Create notify plugin: " << this << std::endl;
}

NotifyPlugin::~NotifyPlugin() {
  std::cout << "Destroy notify plugin: " << this << std::endl;
}

int NotifyPlugin::id() const { return 0; }

void NotifyPlugin::init() {}

void NotifyPlugin::notify(const std::string& message) {
  std::cout << "Notify: " << message << std::endl;
}

IPlugin* createNotifyPlugin() {
  static NotifyPlugin plugin;
  return &plugin;
}
