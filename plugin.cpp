#include "plugin.h"

#include <iostream>

IPlugin::IPlugin() { std::cout << "Create IPlugin " << this << " \n"; }

IPlugin::~IPlugin() { std::cout << "Destory IPlugin " << this << " \n"; }

int IPlugin::id() { return 0; }

IPlugin *createPlugin() {
  static IPlugin plugin;
  return &plugin;
}
