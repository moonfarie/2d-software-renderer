#pragma once

namespace render {

class Framebuffer;

class Renderer {
 public:
  Renderer(Framebuffer& framebuffer);
  ~Renderer() = default;

  void draw_pixel(int x, int y) const;

 private:
  int x_pos(int x) const;
  int row(int y) const;

  Framebuffer& framebuffer_;
};

}  // namespace render
