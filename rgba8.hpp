#pragma once

#include <cstdint>

namespace render {

namespace RGBA {

constexpr uint8_t R = 0;
constexpr uint8_t G = 1;
constexpr uint8_t B = 2;
constexpr uint8_t A = 3;

}  // namespace RGBA

struct RGBA8 {
  uint8_t R = 0;
  uint8_t G = 0;
  uint8_t B = 0;
  uint8_t A = 0;
};

}  // namespace render
