# LiarsDice
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

const int WIDTH = 1080, HEIGHT = 760;

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

void create(SDL_Surface *d, SDL_Surface *winf, SDL_Window *win, SDL_Event windowEvent1)
{
    
    if( d == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = WIDTH/2;
    dstrect.y = HEIGHT/2;
    dstrect.w = 200;
    dstrect.h = 200;
    
    SDL_BlitSurface( d, &srcrect, winf, &dstrect );
    
    SDL_UpdateWindowSurface( win );
    
    while ( true )
    {
        if ( SDL_PollEvent( &windowEvent1 ) )
        {
            if ( SDL_KEYDOWN == windowEvent1.type )
            {
                if ( windowEvent1.key.keysym.sym == SDLK_SPACE)
                {
                    break;
                }
            }
        }
    }
}

void create1(SDL_Surface *d, SDL_Surface *winf, SDL_Window *win, SDL_Event windowEvent1)
{
    
    if( d == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = 340;
    dstrect.y = 380;
    dstrect.w = 200;
    dstrect.h = 200;
    
    SDL_BlitSurface( d, &srcrect, winf, &dstrect );
    
    SDL_UpdateWindowSurface( win );
    
    while ( true )
    {
        if ( SDL_PollEvent( &windowEvent1 ) )
        {
            if ( SDL_KEYDOWN == windowEvent1.type )
            {
                if ( windowEvent1.key.keysym.sym == SDLK_SPACE)
                {
                    break;
                }
            }
        }
    }
}

void choose(SDL_Surface *pic, SDL_Surface *pic2, SDL_Surface *pic3, SDL_Surface *pic4, SDL_Surface *pic5, SDL_Surface *pic6, SDL_Surface *winf, SDL_Window *win, SDL_Event windowEvent1)
{
    int x = random_integer() % 5 + 1;
    
    switch (x)
    {
        case 1:
            create(pic, winf, win, windowEvent1);
            break;
        case 2:
            create(pic2, winf, win, windowEvent1);
            break;
        case 3:
            create(pic3, winf, win, windowEvent1);
            break;
        case 4:
            create(pic4, winf, win, windowEvent1);
            break;
        case 5:
            create(pic5, winf, win, windowEvent1);
            break;
        case 6:
            create(pic6, winf, win, windowEvent1);
            break;
    }
}

void choose1(SDL_Surface *p, SDL_Surface *p2, SDL_Surface *p3, SDL_Surface *p4, SDL_Surface *p5, SDL_Surface *p6, SDL_Surface *windf, SDL_Window *wind, SDL_Event windowEvent2)
{
    int x = random_integer() % 5 + 1;
    
    switch (x)
    {
        case 1:
            create1(p, windf, wind, windowEvent2);
            break;
        case 2:
            create1(p2, windf, wind, windowEvent2);
            break;
        case 3:
            create1(p3, windf, wind, windowEvent2);
            break;
        case 4:
            create1(p4, windf, wind, windowEvent2);
            break;
        case 5:
            create1(p5, windf, wind, windowEvent2);
            break;
        case 6:
            create1(p6, windf, wind, windowEvent2);
            break;
    }
}

int main( int argc, char *argv[] )
{
    SDL_Surface *imageSurface = NULL;
    SDL_Surface *image = NULL;
    SDL_Surface *windowSurface = NULL;
    SDL_Surface *die3 = NULL;
    SDL_Surface *die4 = NULL;
    SDL_Surface *die5 = NULL;
    SDL_Surface *die6 = NULL;
    
    if ( SDL_Init( SDL_INIT_EVERYTHING ) < 0 )
    {
        cout << "SDL could not initialize! SDL Error: " << SDL_GetError( ) << endl;
    }
            
    SDL_Window *window = SDL_CreateWindow( "Hello SDL World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI );
    windowSurface = SDL_GetWindowSurface( window );
            
    if ( NULL == window )
    {
        cout << "Could not create window: " << SDL_GetError( ) << endl;
        return EXIT_FAILURE;
    }
    
    SDL_Event windowEvent;

    imageSurface = SDL_LoadBMP( "hello_world.bmp" );
    if( imageSurface == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    image = SDL_LoadBMP( "hello.bmp" );
    if( image == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    die3 = SDL_LoadBMP( "die3.bmp" );
    if( die3 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    die4 = SDL_LoadBMP( "die4.bmp" );
    if( die4 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    die5 = SDL_LoadBMP( "die5.bmp" );
    if( die5 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    die6 = SDL_LoadBMP( "die6.bmp" );
    if( die6 == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    choose(imageSurface, image, die3, die4, die5, die6, windowSurface, window, windowEvent);
    choose1(imageSurface, image, die3, die4, die5, die6, windowSurface, window, windowEvent);
    
    SDL_FreeSurface(die3);
    SDL_FreeSurface(die4);
    SDL_FreeSurface(die5);
    SDL_FreeSurface(die6);
    SDL_FreeSurface( image );
    SDL_FreeSurface( imageSurface );
    SDL_FreeSurface( windowSurface );
    
    image = NULL;
    imageSurface = NULL;
    die3 = NULL;
    die4 = NULL;
    die5 = NULL;
    die6 = NULL;
    windowSurface = NULL;

    SDL_DestroyWindow( window );
    SDL_Quit( );

    return EXIT_SUCCESS;

}
