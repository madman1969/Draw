#include "draw.h"

#include <stdio.h>

/*
  Update the sprite (Assign random size, character & position)
*/
void update_sprite(Screen *scrn, Sprite* sprite)
{
    // Assign random width & height ...  
    sprite->width = rand() % 10;
    sprite->height = rand() % 10;
    
    // Assign random character ... 
    // sprite->c = 0x41 + rand() % 26;
    // sprite->c = 0x30 + c;
    
    // Assign random offset ... 
    sprite->xoffset = rand() % (scrn->width - sprite->width); 
    sprite->yoffset = rand() % (scrn->height - sprite->height);  
}

/*
   Draw an FPS on screen, along with ticks since last refresh 
 */
void draw_fps(Screen *scrn, int fps, int ticks)
{
    char buffer[20];
	
    sprintf(buffer, "FPS:%d (%d)", fps, ticks);
    memcpy(scrn->screen, buffer, strlen(buffer));
}

/*
  Draw the specified sprite to the screen buffer 
*/
void draw_sprite(Screen *scrn, Sprite *sprite)
{  
  byte inc; 
  char *p;
  
  // For each row of the sprite ...  
  for (inc = sprite->yoffset; inc < sprite->yoffset + sprite->height; inc++)
  {
    // Draw row ...
    p = scrn->screen + ((inc * scrn->width) + sprite->xoffset);
    memset(p, sprite->c, sprite->width); 
  }
} 

/* 
  Allocate screen buffer based on screen size  
*/
void init_screen(Screen *scrn)
{  
  // Clear the screen and establish screen dimensions 
  clrscr();  
  screensize(&scrn->width, &scrn->height);     

  // Calculate the screen size and allocate memory for buffer ...
  scrn->size = scrn->width * scrn->height;
  scrn->screen = (char *)malloc(scrn->size); 
}

/*
  Clear the screen buffer (Fills screen with spaces): 
*/
void clear_screen(Screen *scrn)
{
  // Fill screen buffer with spaces ...
  memset(scrn->screen, 0x20, scrn->size);  
}

/*
  Free up previously allocated screen buffer
*/
void free_screen(Screen *scrn)
{
  free(scrn->screen);
}

/*
  Dump the current screen buffer to the screen
*/
void draw_screen(Screen *scrn)
{
  // Copy the screen buffer to the screen
  memcpy((void *)SCRNBASE, scrn->screen, scrn->size);
}