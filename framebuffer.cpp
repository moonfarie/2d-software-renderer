#include "framebuffer.hpp"

namespace render {

Framebuffer::Framebuffer(int width, int height, int channels)
    : width_(width),
      height_(height),
      channels_(channels),
      data_(width_ * height_ * channels_, static_cast<std::byte>(0)) {}

}  // namespace render
