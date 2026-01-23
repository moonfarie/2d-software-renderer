#pragma once

#include <cstddef>
#include <vector>

namespace render {

constexpr int kBytesPerPixel = 4;

class Framebuffer {
 public:
  Framebuffer(int width, int height);
  ~Framebuffer() = default;

  std::byte* operator[](size_t i);

  int width() const;
  int height() const;
  int stride() const;

  const std::byte* data() const;

 private:
  void calculate_stride();

  int width_{0};
  int height_{0};
  int stride_{0};
  std::vector<std::byte> data_;
};

}  // namespace render
