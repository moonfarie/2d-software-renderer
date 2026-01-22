#include "framebuffer.hpp"

namespace render {

Framebuffer::Framebuffer(int width, int height)
    : width_(width),
      height_(height),
      data_(width_ * height_ * kBytesPerPixel, static_cast<std::byte>(0)) {}

int Framebuffer::width() const { return width_; }

int Framebuffer::height() const { return height_; }

const std::byte* Framebuffer::data() const { return data_.data(); }

}  // namespace render
