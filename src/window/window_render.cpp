#include "window.hpp"

void Window::clear() {
    SDL_SetRenderDrawColor(renderer, 40, 40, 40, 255);
    SDL_RenderClear(renderer);
}

void Window::render() {
    SDL_RenderTexture(renderer, scanline_texture, nullptr, nullptr);
    SDL_RenderPresent(renderer);
}

void Window::draw_texture(Texture &texture, SDL_FRect dest_rect,
                          SDL_FRect src_rect, SDL_FlipMode flip) {
    SDL_RenderTextureRotated(renderer, texture.get_ptr(), &src_rect, &dest_rect,
                             0, nullptr, flip);
}
