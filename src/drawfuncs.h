#ifndef DRAWFUNCS_H
#define DRAWFUNCS_H

#include <SDL3/SDL_surface.h>

typedef struct {
    SDL_Surface *gfx_file;
} Graphic;

typedef struct {
    SDL_Surface *spr_file;
} Sprite;

void DrawGraphic(Graphic graphic, int x, int y);
void DrawSprite(Sprite sprite, int x, int y);

#endif
