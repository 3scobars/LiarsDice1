#include <iostream>
#include <SDL2/SDL.h>
#include <ctime>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include "create.hpp"
#include <cstdlib>
#include "choose.hpp"

using namespace std;

const int WIDTH = 1080, HEIGHT = 760;

//makes random number
unsigned int random_integer()
{
    static bool is_seeded;
    
    if (!is_seeded)
    {
        srand(time(0));
        is_seeded = true;
    }
    return rand();
}

int main( int argc, char *argv[] )
{
    SDL_Surface *imageSurface = NULL;
    SDL_Surface *image = NULL;
    SDL_Surface *die3 = NULL;
    SDL_Surface *die4 = NULL;
    SDL_Surface *die5 = NULL;
    SDL_Surface *die6 = NULL;
    SDL_Surface *dice = NULL;
    
    if ( SDL_Init( SDL_INIT_EVERYTHING ) < 0 )
    {
        cout << "SDL could not initialize! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    //create window
    SDL_Window *window = SDL_CreateWindow( "Hello SDL World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI );
    
    //check if window opens
    if ( NULL == window )
    {
        cout << "Could not create window: " << SDL_GetError( ) << "creating window" << endl;
        return EXIT_FAILURE;
    }
    
    //create a renderer
    int flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, flags);
    if (renderer == nullptr)
    {
        cout << endl << SDL_GetError() << "creating renderer" << endl;
        return -1;
    }
    
    //creates SDL_Event
    SDL_Event windowEvent;
    
    //Upload all the die pictures
    imageSurface = SDL_LoadBMP( "die1.bmp" );
    if( imageSurface == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << " imageSurface" << endl;
    }
    
    image = SDL_LoadBMP( "die2.bmp" );
    if( image == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << " image" <<  endl;
    }
    
    die3 = SDL_LoadBMP( "die3.bmp" );
    if( die3 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << " die3 " << endl;
    }
    
    die4 = SDL_LoadBMP( "die4.bmp" );
    if( die4 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << " die4 " << endl;
    }
    
    die5 = SDL_LoadBMP( "die5.bmp" );
    if( die5 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << " die5" << endl;
    }
    
    die6 = SDL_LoadBMP( "die6.bmp" );
    if( die6 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << " die6" << endl;
    }
    
    dice = SDL_LoadBMP( "dice.bmp" );
    if( dice == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << " dice" << endl;
    }
    
    while(true)
    {
        while (SDL_PollEvent(&windowEvent))
        {
            if (windowEvent.type == SDL_QUIT || (windowEvent.type == SDL_WINDOWEVENT && windowEvent.window.event == SDL_WINDOWEVENT_CLOSE))
            {
                goto main_exit;
            }
            else if (windowEvent.type == SDL_KEYDOWN && windowEvent.key.keysym.sym == SDLK_SPACE)
            {
                choose(imageSurface, image, die3, die4, die5, die6, renderer, window, windowEvent);
                choose1(imageSurface, image, die3, die4, die5, die6, renderer, window, windowEvent);
                choose2(imageSurface, image, die3, die4, die5, die6, renderer, window, windowEvent);
                choose3(imageSurface, image, die3, die4, die5, die6, renderer, window, windowEvent);
                choose4(imageSurface, image, die3, die4, die5, die6, renderer, window, windowEvent);
            }
        }
    }
     
    main_exit:
    
    SDL_FreeSurface(die3);
    SDL_FreeSurface(die4);
    SDL_FreeSurface(die5);
    SDL_FreeSurface(die6);
    SDL_FreeSurface( image );
    SDL_FreeSurface( imageSurface );
    
    image = NULL;
    imageSurface = NULL;
    die3 = NULL;
    die4 = NULL;
    die5 = NULL;
    die6 = NULL;
    
    SDL_DestroyWindow( window );
    SDL_Quit();
    
    return EXIT_SUCCESS;
    
}
