#include "display.hpp"

#include <GL/freeglut.h>

namespace platform {

Display::Display(uint32_t mode) : mode_(mode) { glutInitDisplayMode(mode_); }

}  // namespace platform
