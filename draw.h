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
void buildscreen(Screen *scrn);
void clearscreen(Screen* scrn);
void freescreen(Screen *scrn);
void drawscreen(Screen *scrn);
void draw_sprite(Screen *scrn, Sprite *sprite);
void update_sprite(Screen *scrn, Sprite* sprite);

#endif