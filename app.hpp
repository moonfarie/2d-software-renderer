#pragma once

#include <cstddef>

#include "display.hpp"
#include "framebuffer.hpp"
#include "glut.hpp"
#include "renderer.hpp"
#include "window.hpp"

class App {
 public:
  App(int argc, char* argv[]);
  ~App() = default;

  void run() const;

 private:
  platform::GLUT glut_;
  platform::Window window_;
  platform::Display display_;
  render::Framebuffer<std::byte> framebuffer_;
  render::Renderer renderer_;
};
