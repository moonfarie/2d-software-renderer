#pragma once

#include <vector>

namespace render {

constexpr int kBytesPerPixel = 4;

template <typename T>
class Framebuffer {
 public:
  Framebuffer(int width, int height);
  ~Framebuffer() = default;

  int width() const;
  int height() const;

  const T* data() const;

 private:
  int width_{0};
  int height_{0};
  std::vector<T> data_;
};

template <typename T>
Framebuffer<T>::Framebuffer(int width, int height)
    : width_(width), height_(height), data_(width_ * height_ * kBytesPerPixel, static_cast<T>(0)) {}

template <typename T>
int Framebuffer<T>::width() const {
  return width_;
}

template <typename T>
int Framebuffer<T>::height() const {
  return height_;
}

template <typename T>
const T* Framebuffer<T>::data() const {
  return data_.data();
}

}  // namespace render
