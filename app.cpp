#include "app.hpp"

#include <GL/freeglut.h>

App::App(int argc, char* argv[])
    : glut_(argc, argv), framebuffer_(window_.width(), window_.height(), 4) {}

void App::run() const { glutMainLoop(); }
