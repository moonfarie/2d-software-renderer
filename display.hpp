#pragma once

#include <cstdint>

namespace platform {

class Display {
 public:
  Display();
  ~Display() = default;

 private:
  uint32_t mode_{0x00000000};
};

}  // namespace platform
