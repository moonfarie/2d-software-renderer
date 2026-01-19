#pragma once

#include <cstddef>
#include <vector>

namespace render {

class Framebuffer {
 public:
  Framebuffer(int width, int height, int channels);
  ~Framebuffer() = default;

 private:
  int width_{0};
  int height_{0};
  int channels_{0};
  std::vector<std::byte> data_;
};

}  // namespace render
