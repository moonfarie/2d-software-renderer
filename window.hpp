#pragma once

#include <string>

namespace platform {

class Window {
 public:
  Window(int width, int height, const std::string& title);
  ~Window();

  int width() const;
  int height() const;

 private:
  static void on_resize();

  int width_{0};
  int height_{0};
  const std::string title_{""};
  int id_{0};
};

}  // namespace platform
