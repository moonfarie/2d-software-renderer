#include <GL/freeglut.h>

#include "window.hpp"

int main(int argc, char* argv[]) {
  glutInit(&argc, argv);

  platform::Window window{800, 600, "2D Software Renderer"};

  glutMainLoop();

  return 0;
}
