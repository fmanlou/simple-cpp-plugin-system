#pragma once

#include <unordered_map>

#include "plugin.h"

class IPluginSystem {
 public:
  virtual ~IPluginSystem() = default;
  virtual void loadPlugins() = 0;
  virtual IPlugin* getPlugin(int id) = 0;
};

class PluginSystem : public IPluginSystem {
 public:
  void loadPlugins() override;
  IPlugin* getPlugin(int id) override;

 private:
  std::unordered_map<int, IPlugin*> plugins_;
};
