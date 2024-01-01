#pragma once

#include <string>

#include "plugin.h"

class NotifyPlugin : public IPlugin {
 public:
  NotifyPlugin();
  virtual ~NotifyPlugin();
  int id() const override;
  void init() override;
  void notify(const std::string& message);
};

extern "C" {
IPlugin* createNotifyPlugin();
}
