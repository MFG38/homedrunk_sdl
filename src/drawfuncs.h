#ifndef DRAWFUNCS_H
#define DRAWFUNCS_H

#include <SDL3/SDL_render.h>

SDL_Texture* LoadGraphic(const char* src_img);
SDL_Texture* LoadSprite(const char* src_img);

void DrawGraphic(struct Graphic **graphic, int x, int y);
void DrawSprite(struct Sprite **sprite, int x, int y);

#endif
