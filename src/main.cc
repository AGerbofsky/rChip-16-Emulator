
// C++ STL include files
#include <iostream>
#include <fstream>
#include <memory>

// C-Std. Library include files
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fnctrl.h>
#include <inttypes.h>

// Framework include files
#include <SDL2/SDL.h>

// Local header files
#include "control.h"
#include "cpu.h"
#include "vdp.h"


int main(int argc, const char** argv)
{
    // Place caller for filehandler, here...

    // Class initilization here...

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow(
        APPLICATION_WINDOW_TITLE,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        RCHIP16_SCALE_FACTOR * RCHIP16_DISPLAY_H,
        RCHIP16_SCALE_FACTOR * RCHIP16_DISPLAY_W,
        SDL_WINDOW_SHOWN
    );

    // Initilization of the renderer. Then point it to the render target.
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_TEXTUREACCESS_TARGET);

    // Main program-loop
    for(;;)
    {
        SDL_Event event;

        // Parse events during program execution
        for(;;)
        {
            switch (event.type)
            {
                // Program termination
                case SDL_QUIT:
                    goto out;
                    break;

                // Code for input processing here...
                
                
                break;
            }

        }
        // Code for pixel generation, and display processing.
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_RenderClear(renderer);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);

		for (int x = 0; x < RCHIP16_DISPLAY_W; x++)
		{
			for (int y = 0; y < RCHIP16_DISPLAY_H; y++)
			{
				if (/*screen_is_set*/(/*disp_instance, x, y*/))
				{
					SDL_Rect r;

					r.x = x * RCHIP16_SCALE_FACTOR;
					r.y = y * RCHIP16_SCALE_FACTOR;
					r.w = RCHIP16_SCALE_FACTOR;
					r.h = RCHIP16_SCALE_FACTOR;

					SDL_RenderFillRect(renderer, &r);
					
				}
			}
		}

        // Display the rendered image
		SDL_RenderPresent(renderer);
	
        // Place code for timers, and cpu clock here...

        // Place code for fetch, decode, execute here...

    }

out:
    SDL_DestroyWindow(window);
    return 0;

}