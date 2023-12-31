#pragma once

class IPlugin {
 public:
  int id();
};

typedef IPlugin *(*GetPluginFunc)();

extern "C" {
IPlugin *getPlugin();
}