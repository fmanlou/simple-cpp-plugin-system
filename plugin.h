#pragma once

class IPlugin {
 public:
  int id();
};

IPlugin *getPlugin();