#pragma once

class IPlugin {
 public:
  virtual int id();
};

typedef IPlugin *(*GetPluginFunc)();

extern "C" {
IPlugin *getPlugin();
}