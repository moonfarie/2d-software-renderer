#include "renderer.hpp"

#include "framebuffer.hpp"

namespace render {

Renderer::Renderer(Framebuffer& framebuffer) : framebuffer_(framebuffer) {}

}  // namespace render
