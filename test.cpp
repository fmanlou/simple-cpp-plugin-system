#include <cassert>

#include "plugin.h"

int main() {
  auto plugin = getPlugin();
  assert(plugin->id() == 0);
}