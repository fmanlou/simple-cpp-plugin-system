#include "pluginloader.h"

int main() {
  PluginLoader::load("libNotifyPlugin.so");
  return 0;
}