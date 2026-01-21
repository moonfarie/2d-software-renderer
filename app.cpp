#include "app.hpp"

#include <GL/freeglut.h>
#include <GL/gl.h>

App::App(int argc, char* argv[])
    : glut_(argc, argv),
      window_(800, 600, "2D Software Renderer"),
      display_(GLUT_RGBA | GLUT_SINGLE, GL_RGBA, GL_UNSIGNED_BYTE),
      framebuffer_(window_.width(), window_.height()),
      renderer_() {
  display_.set_framebuffer_view(framebuffer_.width(), framebuffer_.height(), framebuffer_.data());
}

void App::run() const { glutMainLoop(); }
