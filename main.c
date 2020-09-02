#include <time.h>

#include "draw.h"

void main(void)
{
  Screen scrn;  
  Sprite sprite[10];
  clock_t oldtime;
  clock_t newtime;
  int fps;
  int diff;
  byte i;

  // Setup character for each sprite ...
  for (i = 0; i < 10; i++)
  {
      sprite[i].c = 0x30 + i;
  }
	
  oldtime = clock();
	
  // Create initial screen buffer 
  init_screen(&scrn);  
    
  // Loop until a key is pressed ... 
  do{
    newtime = clock();

  	// Calculate tick since last refresh and FPS ...
    diff = (int)(newtime - oldtime);
    fps = (int)(CLOCKS_PER_SEC / diff);
  	
	// Fill screen with spaces ...
    clear_screen(&scrn);     

  	// Assign random size & shape to sprite and draw it ...
  	for (i = 0; i < 10; i++)
  	{
        update_sprite(&scrn, &sprite[i]);
        draw_sprite(&scrn, &sprite[i]);
  	}

  	// Show FPS & clock ticks since last refresh ...
    draw_fps(&scrn, fps, diff);
  	
  	// Draw screen buffer to screen ...
    draw_screen(&scrn);

  	// Doesn't work on PET's :( ...
	// waitvsync();
  	
    oldtime = newtime;
  }
  while (!kbhit());
     
  // Free up previously allocated screens ... 
  free_screen(&scrn);
}
