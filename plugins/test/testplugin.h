#pragma once

#include "plugin.h"

class TestPlugin : public IPlugin {
 public:
  TestPlugin();
  virtual ~TestPlugin();
  int id() const override;
  void init() override;
};

extern "C" {
IPlugin *createTestPlugin();
}
