#include "framebuffer.hpp"

namespace render {

Framebuffer::Framebuffer(int width, int height)
    : width_(width),
      height_(height),
      data_(width_ * height_ * kBytesPerPixel, static_cast<std::byte>(0)) {
  calculate_stride();
}

std::byte* Framebuffer::operator[](size_t i) { return &data_[i]; }

int Framebuffer::width() const { return width_; }

int Framebuffer::height() const { return height_; }

int Framebuffer::stride() const { return stride_; }

const std::byte* Framebuffer::data() const { return data_.data(); }

void Framebuffer::calculate_stride() { stride_ = width_ * kBytesPerPixel; }

}  // namespace render
