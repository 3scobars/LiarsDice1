#include "choose.hpp"
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "create.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned int random_integer();

void choose(SDL_Surface *pic, SDL_Surface *pic2, SDL_Surface *pic3, SDL_Surface *pic4, SDL_Surface *pic5, SDL_Surface *pic6, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    int x = random_integer() % 5 + 1;
    
    switch (x)
    {
        case 1:
            create(pic, renderer1, win, windowEvent1);
            break;
        case 2:
            create(pic2, renderer1, win, windowEvent1);
            break;
        case 3:
            create(pic3, renderer1, win, windowEvent1);
            break;
        case 4:
            create(pic4, renderer1, win, windowEvent1);
            break;
        case 5:
            create(pic5, renderer1, win, windowEvent1);
            break;
        case 6:
            create(pic6, renderer1, win, windowEvent1);
            break;
    }
}

void choose1(SDL_Surface *pic, SDL_Surface *pic2, SDL_Surface *pic3, SDL_Surface *pic4, SDL_Surface *pic5, SDL_Surface *pic6, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    int x = random_integer() % 5 + 1;
    
    switch (x)
    {
        case 1:
            create1(pic, renderer1, win, windowEvent1);
            break;
        case 2:
            create1(pic2, renderer1, win, windowEvent1);
            break;
        case 3:
            create1(pic3, renderer1, win, windowEvent1);
            break;
        case 4:
            create1(pic4, renderer1, win, windowEvent1);
            break;
        case 5:
            create1(pic5, renderer1, win, windowEvent1);
            break;
        case 6:
            create1(pic6, renderer1, win, windowEvent1);
            break;
    }
}

void choose2(SDL_Surface *pic, SDL_Surface *pic2, SDL_Surface *pic3, SDL_Surface *pic4, SDL_Surface *pic5, SDL_Surface *pic6, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    int x = random_integer() % 5 + 1;
    
    switch (x)
    {
        case 1:
            create2(pic, renderer1, win, windowEvent1);
            break;
        case 2:
            create2(pic2, renderer1, win, windowEvent1);
            break;
        case 3:
            create2(pic3, renderer1, win, windowEvent1);
            break;
        case 4:
            create2(pic4, renderer1, win, windowEvent1);
            break;
        case 5:
            create2(pic5, renderer1, win, windowEvent1);
            break;
        case 6:
            create2(pic6, renderer1, win, windowEvent1);
            break;
    }
}

void choose3(SDL_Surface *pic, SDL_Surface *pic2, SDL_Surface *pic3, SDL_Surface *pic4, SDL_Surface *pic5, SDL_Surface *pic6, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    int x = random_integer() % 5 + 1;
    
    switch (x)
    {
        case 1:
            create3(pic, renderer1, win, windowEvent1);
            break;
        case 2:
            create3(pic2, renderer1, win, windowEvent1);
            break;
        case 3:
            create3(pic3, renderer1, win, windowEvent1);
            break;
        case 4:
            create3(pic4, renderer1, win, windowEvent1);
            break;
        case 5:
            create3(pic5, renderer1, win, windowEvent1);
            break;
        case 6:
            create3(pic6, renderer1, win, windowEvent1);
            break;
    }
}

void choose4(SDL_Surface *pic, SDL_Surface *pic2, SDL_Surface *pic3, SDL_Surface *pic4, SDL_Surface *pic5, SDL_Surface *pic6, SDL_Renderer *renderer1, SDL_Window *win, SDL_Event windowEvent1)
{
    int x = random_integer() % 5 + 1;
    
    switch (x)
    {
        case 1:
            create4(pic, renderer1, win, windowEvent1);
            break;
        case 2:
            create4(pic2, renderer1, win, windowEvent1);
            break;
        case 3:
            create4(pic3, renderer1, win, windowEvent1);
            break;
        case 4:
            create4(pic4, renderer1, win, windowEvent1);
            break;
        case 5:
            create4(pic5, renderer1, win, windowEvent1);
            break;
        case 6:
            create4(pic6, renderer1, win, windowEvent1);
            break;
    }
}
