#include "display.hpp"

#include <GL/freeglut.h>

namespace platform {

Display::Display() {
  mode_ = GLUT_RGBA | GLUT_SINGLE;
  glutInitDisplayMode(mode_);
}

}  // namespace platform
