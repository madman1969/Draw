#ifndef DRAW_H
#define DRAW_H

#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cbm.h>

#include "screen.h"

/*
  Function Prototypes
*/
void init_screen(Screen *scrn);
void clear_screen(Screen* scrn);
void free_screen(Screen *scrn);
void draw_screen(Screen *scrn);
void draw_fps(Screen* scrn, int fps, int ticks);
void draw_sprite(Screen *scrn, Sprite *sprite);
void update_sprite(Screen* scrn, Sprite* sprite);

#endif