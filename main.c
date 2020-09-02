#include "draw.h"

void main(void)
{
  Screen scrn; 
  Sprite sprite;
  
  // Create initial screen buffer 
  init_screen(&scrn);  
    
  // Loop until a key is pressed ... 
  do{
    // Fill screen with spaces ...
    clear_screen(&scrn);     

  	// Assign random size & shape to sprite and draw it ...
    update_sprite(&scrn, &sprite);
    draw_sprite(&scrn, &sprite); 

  	// Draw screen buffer to screen ...
    draw_screen(&scrn);

  	// Doesn't work on PET's :( ...
	// waitvsync();  
  }
  while (!kbhit());
     
  // Free up previously allocated screens ... 
  free_screen(&scrn);
}
