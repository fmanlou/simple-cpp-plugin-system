#include "plugin.h"

int IPlugin::id() { return 0; }

IPlugin *getPlugin() {
  static IPlugin plugin;
  return &plugin;
}
