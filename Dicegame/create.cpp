#include "create.hpp"
#include <SDL2_image/SDL_image.h>
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

void create(SDL_Surface *pic, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    SDL_Texture *texture = NULL;
    if( pic == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << "create texture" << endl;
    }
    
    texture = SDL_CreateTextureFromSurface(renderer1, pic);
    SDL_FreeSurface(pic);
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = 0;
    dstrect.y = 200;
    dstrect.w = 200;
    dstrect.h = 200;
    
    SDL_RenderClear(renderer1);
    SDL_RenderCopy(renderer1, texture, &srcrect, &dstrect);
    SDL_RenderPresent(renderer1);
    
    SDL_UpdateWindowSurface( win );
}

void create1(SDL_Surface *pic1, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    SDL_Texture *texture = NULL;
    if( pic1 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << "create texture" << endl;
    }
    
    texture = SDL_CreateTextureFromSurface(renderer1, pic1);
    SDL_FreeSurface(pic1);
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = 200;
    dstrect.y = 400;
    dstrect.w = 200;
    dstrect.h = 200;
    
    SDL_RenderClear(renderer1);
    SDL_RenderCopy(renderer1, texture, &srcrect, &dstrect);
    SDL_RenderPresent(renderer1);
    
    SDL_UpdateWindowSurface( win );
}

void create2(SDL_Surface *pic2, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    SDL_Texture *texture = NULL;
    if( pic2 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << "create texture" << endl;
    }
    
    texture = SDL_CreateTextureFromSurface(renderer1, pic2);
    SDL_FreeSurface(pic2);
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = 400;
    dstrect.y = 600;
    dstrect.w = 200;
    dstrect.h = 200;
    
    SDL_RenderClear(renderer1);
    SDL_RenderCopy(renderer1, texture, &srcrect, &dstrect);
    SDL_RenderPresent(renderer1);
    
    SDL_UpdateWindowSurface( win );
}

void create3(SDL_Surface *pic3, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    SDL_Texture *texture = NULL;
    if( pic3 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << "create texture" << endl;
    }
    
    texture = SDL_CreateTextureFromSurface(renderer1, pic3);
    SDL_FreeSurface(pic3);
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = 0;
    dstrect.y = 800;
    dstrect.w = 200;
    dstrect.h = 200;
    
    SDL_RenderClear(renderer1);
    SDL_RenderCopy(renderer1, texture, &srcrect, &dstrect);
    SDL_RenderPresent(renderer1);
    
    SDL_UpdateWindowSurface( win );
}

void create4(SDL_Surface *pic4, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    SDL_Texture *texture = NULL;
    if( pic4 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << "create texture" << endl;
    }
    
    texture = SDL_CreateTextureFromSurface(renderer1, pic4);
    SDL_FreeSurface(pic4);
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = 0;
    dstrect.y = 600;
    dstrect.w = 200;
    dstrect.h = 200;
    
    SDL_RenderClear(renderer1);
    SDL_RenderCopy(renderer1, texture, &srcrect, &dstrect);
    SDL_RenderPresent(renderer1);
    
    SDL_UpdateWindowSurface( win );
}
