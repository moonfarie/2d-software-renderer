#include "display.hpp"

#include <GL/freeglut.h>
#include <GL/gl.h>

namespace platform {

Display::Display(uint32_t glut_mode, uint32_t gl_format, uint32_t gl_type)
    : gl_format_(gl_format), gl_type_(gl_type) {
  glutInitDisplayMode(glut_mode);
  glutDisplayFunc(display_cb);
  glutSetWindowData(this);
}

void Display::set_pixels_view(int width, int height, const void* pixels) {
  width_ = width;
  height_ = height;
  pixels_ = pixels;
}

void Display::display_cb() {
  const auto* self = static_cast<const Display*>(glutGetWindowData());
  if (self != nullptr) {
    self->draw_frame();
  }
}

void Display::draw_frame() const {
  glDrawPixels(static_cast<GLsizei>(width_), static_cast<GLsizei>(height_),
               static_cast<GLenum>(gl_format_), static_cast<GLenum>(gl_type_),
               static_cast<const GLvoid*>(pixels_));
  glFlush();
}

}  // namespace platform
