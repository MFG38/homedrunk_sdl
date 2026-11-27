#include <stdio.h>
#include <SDL3/SDL.h>

#include "drawfuncs.h"

extern SDL_Renderer *renderer;

SDL_Texture* LoadGraphic(const char *src_img)
{
    const char* src_dir = "assets/gfx/";

    char filepath[512];
    snprintf(filepath, sizeof(filepath), "%s%s", src_dir, src_img);

    SDL_Surface* surf = SDL_LoadSurface(filepath);
    if(!surf) {
        SDL_Log("Graphic %s failed to load: %s", filepath, SDL_GetError());
        return NULL;
    }

    SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, surf);
    SDL_DestroySurface(surf);

    if(!tex) {
        SDL_Log("Texture creation from %s failed: %s", filepath, SDL_GetError());
        return NULL;
    }

    return tex;
}


SDL_Texture* LoadSprite(const char *src_img)
{
    const char* src_dir = "assets/sprites/";

    char filepath[512];
    snprintf(filepath, sizeof(filepath), "%s%s", src_dir, src_img);

    SDL_Surface* surf = SDL_LoadSurface(filepath);
    if(!surf) {
        SDL_Log("Graphic %s failed to load: %s", filepath, SDL_GetError());
        return NULL;
    }

    SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, surf);
    SDL_DestroySurface(surf);

    if(!tex) {
        SDL_Log("Texture creation from %s failed: %s", filepath, SDL_GetError());
        return NULL;
    }

    return tex;
}

