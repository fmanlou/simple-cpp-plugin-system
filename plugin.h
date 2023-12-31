#pragma once

class IPlugin {
 public:
  IPlugin();
  virtual ~IPlugin();
  virtual int id();
};

typedef IPlugin *(*GetPluginFunc)();

extern "C" {
IPlugin *getPlugin();
}