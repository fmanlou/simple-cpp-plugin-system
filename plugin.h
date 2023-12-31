#pragma once

class IPlugin {
 public:
  IPlugin();
  ~IPlugin();
  virtual int id();
};

typedef IPlugin *(*GetPluginFunc)();

extern "C" {
IPlugin *getPlugin();
}