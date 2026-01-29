#include "app.hpp"

#include <GL/freeglut.h>
#include <GL/gl.h>

App::App(int argc, char* argv[])
    : glut_(argc, argv),
      window_(800, 600, "2D Software Renderer"),
      display_(GLUT_RGBA | GLUT_SINGLE, GL_RGBA, GL_UNSIGNED_BYTE),
      framebuffer_(window_.width(), window_.height()),
      renderer_(framebuffer_) {
  display_.set_pixels_view(framebuffer_.width(), framebuffer_.height(), framebuffer_.data());
}

void App::run() const {
  while (true) {
    glutMainLoopEvent();

    renderer_.draw_pixel(framebuffer_.width() / 2, framebuffer_.height() / 2);

    glutPostRedisplay();
  }
}
