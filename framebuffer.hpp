#pragma once

#include <cstddef>
#include <vector>

namespace render {

constexpr int kBytesPerPixel = 4;

class Framebuffer {
 public:
  Framebuffer(int width, int height);
  ~Framebuffer() = default;

  int width() const;
  int height() const;

  const std::byte* data() const;

 private:
  int width_{0};
  int height_{0};
  std::vector<std::byte> data_;
};

}  // namespace render
