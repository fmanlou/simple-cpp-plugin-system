#pragma once

class IPlugin {
 public:
  IPlugin() = default;
  virtual ~IPlugin() = default;
  virtual int id() const = 0;
};

typedef IPlugin *(*CreatePluginFunc)();