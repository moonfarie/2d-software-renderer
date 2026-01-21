#include "window.hpp"

#include <GL/freeglut.h>

#include <stdexcept>

namespace platform {

Window::Window(int width, int height, const std::string& title)
    : width_(width), height_(height), title_(title) {
  glutInitWindowSize(width_, height_);
  id_ = glutCreateWindow(title_.c_str());
  if (id_ == 0) {
    throw std::runtime_error("Failed to create GLUT window");
  }
}

Window::~Window() { glutDestroyWindow(id_); }

int Window::width() const { return width_; }

int Window::height() const { return height_; }

void Window::on_resize() {
  //
}

}  // namespace platform
