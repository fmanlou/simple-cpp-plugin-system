#pragma once

class IPluginSystem;

class IPlugin {
 public:
  IPlugin() = default;
  virtual ~IPlugin() = default;
  virtual int id() const = 0;
  virtual void init() = 0;

  void setPluginSystem(IPluginSystem *ptr);

 protected:
  IPluginSystem *pluginSystem_{nullptr};
};

typedef IPlugin *(*CreatePluginFunc)();