#ifndef SCREEN_H
#define SCREEN_H

#define POKE(addr,val) (*(unsigned char*) (addr) = (val))

#if defined(__C64__)
#define SCRNBASE 0x0400
#elif defined(__PET__)
#define SCRNBASE 0x8000
#endif

typedef unsigned char byte;

/*
	Structure representing an individual sprite
 */
typedef struct {
  byte xoffset;
  byte yoffset;
  byte width;
  byte height;
  char c;  
} Sprite;

/*
	Structure representing the text screen 40x25, or 80x25
 */
typedef struct {
  byte width;
  byte height;
  int size;
  char *screen;
} Screen;

#endif