#pragma once

#include "rgba8.hpp"

namespace render {

class Framebuffer;

class Renderer {
 public:
  Renderer(Framebuffer& framebuffer);
  ~Renderer() = default;

  void draw_pixel(int x, int y, const RGBA8& color) const;

 private:
  int x_pos(int x) const;
  int row(int y) const;

  Framebuffer& framebuffer_;
};

}  // namespace render
