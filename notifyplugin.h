#pragma once

#include "plugin.h"

class NotifyPlugin : public IPlugin {
 public:
  NotifyPlugin();
  virtual ~NotifyPlugin();
  int id() const override;
};

extern "C" {
IPlugin *createNotifyPlugin();
}
