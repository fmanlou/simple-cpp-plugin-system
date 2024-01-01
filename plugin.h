#pragma once

class IPlugin {
 public:
  IPlugin();
  virtual ~IPlugin();
  virtual int id();
};

typedef IPlugin *(*CreatePluginFunc)();

extern "C" {
IPlugin *createPlugin();
}