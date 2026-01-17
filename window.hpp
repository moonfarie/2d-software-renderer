#pragma once

#include <string>

namespace platform {

class Window {
 public:
  Window(int width, int height, const std::string& title);
  ~Window();

 private:
  static void on_resize();

  int width_{800};
  int height_{600};
  const std::string title_{"2D Software Renderer"};
  int id_{0};
};

}  // namespace platform
