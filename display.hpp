#pragma once

#include <cstdint>

namespace platform {

class Display {
 public:
  Display(uint32_t glut_mode, uint32_t gl_format, uint32_t gl_type);
  ~Display() = default;

  Display(const Display&) = delete;
  Display& operator=(const Display&) = delete;

  void set_framebuffer_view(int width, int height, const void* framebuffer);

 private:
  static void display_cb();

  void draw_frame() const;

  uint32_t gl_format_{0x00000000};
  uint32_t gl_type_{0x00000000};
  int width_{0};
  int height_{0};
  const void* pixels_{nullptr};
};

}  // namespace platform
