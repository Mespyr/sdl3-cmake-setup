#pragma once

#include <SDL3/SDL.h>

class Texture {
  public:
    Texture(SDL_Texture* texture, float width, float height)
        : texture(texture), width(width), height(height) {}

    SDL_Texture* get_ptr() { return texture; }
    float        get_width() { return width; }
    float        get_height() { return height; }

  private:
    SDL_Texture* texture;
    const float  width, height;
};
