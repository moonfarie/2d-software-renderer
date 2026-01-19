#pragma once

#include "display.hpp"
#include "glut.hpp"
#include "window.hpp"

class App {
 public:
  App(int argc, char* argv[]);
  ~App() = default;

  void run() const;

 private:
  platform::GLUT glut_;
  platform::Window window_{800, 600, "2D Software Renderer"};
  platform::Display display_;
};
