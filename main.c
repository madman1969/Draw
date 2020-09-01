#include "draw.h"

void main(void)
{
  Screen scrn; 
  Sprite sprite;
  
  // Build the screen buffer 
  buildscreen(&scrn);  
    
  // Loop until a key is pressed ... 
  do{    
    clearscreen(&scrn);           
        
    update_sprite(&scrn, &sprite);
    draw_sprite(&scrn, &sprite); 
    
    drawscreen(&scrn);
	// waitvsync();
  }
  while (!kbhit());
     
  // Free up previously allocated screens ... 
  freescreen(&scrn);
}
