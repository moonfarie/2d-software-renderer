#pragma once

namespace render {

class Framebuffer;

class Renderer {
 public:
  Renderer(Framebuffer& framebuffer);
  ~Renderer() = default;

 private:
  Framebuffer& framebuffer_;
};

}  // namespace render
