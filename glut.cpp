#include "glut.hpp"

#include <GL/freeglut.h>

namespace platform {

GLUT::GLUT(int argc, char* argv[]) { glutInit(&argc, argv); }

}  // namespace platform
