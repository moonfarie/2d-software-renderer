#include "app.hpp"

#include <GL/freeglut.h>

App::App(int argc, char* argv[]) : glut_(argc, argv) {}

void App::run() const { glutMainLoop(); }
