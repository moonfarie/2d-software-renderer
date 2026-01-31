#include "renderer.hpp"

#include "framebuffer.hpp"

namespace render {

Renderer::Renderer(Framebuffer& framebuffer) : framebuffer_(framebuffer) {}

void Renderer::draw_pixel(int x, int y, const RGBA8& color) const {
  framebuffer_[x_pos(x) + row(y)][0] = static_cast<std::byte>(color.R);
  framebuffer_[x_pos(x) + row(y)][1] = static_cast<std::byte>(color.G);
  framebuffer_[x_pos(x) + row(y)][2] = static_cast<std::byte>(color.B);
  framebuffer_[x_pos(x) + row(y)][3] = static_cast<std::byte>(color.A);
}

int Renderer::x_pos(int x) const { return x * kBytesPerPixel; }

int Renderer::row(int y) const { return y * framebuffer_.stride(); }

}  // namespace render
