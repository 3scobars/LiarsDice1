# LiarsDice
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

const int WIDTH = 1080, HEIGHT = 760;

int main( int argc, char *argv[] )
{
    SDL_Surface *imageSurface = NULL;
    SDL_Surface *image = NULL;
    SDL_Surface *windowSurface = NULL;
    
    
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
    
    int flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, flags);
    if (renderer == nullptr)
    {
        cout << SDL_GetError();
        return -1;
    }
    
    SDL_Event windowEvent;

    imageSurface = SDL_LoadBMP( "hello_world.bmp" );
    if( imageSurface == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, windowSurface);
    
    if (texture == NULL) {
        fprintf(stderr, "CreateTextureFromSurface failed: %s\n", SDL_GetError());
        exit(1);
    }
    
    SDL_FreeSurface(imageSurface);
    
    SDL_Rect srcrect;
    SDL_Rect dstrect;
    
    srcrect.x = 0;
    srcrect.y = 0;
    srcrect.w = 200;
    srcrect.h = 200;
    dstrect.x = WIDTH/2;
    dstrect.y = HEIGHT/2;
    dstrect.w = 100;
    dstrect.h = 100;
    
    
    SDL_RenderCopy(<#SDL_Renderer *renderer#>, <#SDL_Texture *texture#>, <#const SDL_Rect *srcrect#>, <#const SDL_Rect *dstrect#>)
    
    //Update the surface
    SDL_UpdateWindowSurface( window );
    
    while ( true )
    {
        if ( SDL_PollEvent( &windowEvent ) )
        {
            if ( SDL_KEYDOWN == windowEvent.type )
            {
                if ( windowEvent.key.keysym.sym == SDLK_SPACE)
                {
                    break;
                }
            }
        }
    }
    
    image = SDL_LoadBMP( "hello.bmp" );
    if( image == NULL )
    {
        cout << "SDL could not load image! SDL Error: " << SDL_GetError( ) << endl;
    }
    SDL_Rect srcrect1;
    SDL_Rect dstrect1;
    
    srcrect1.x = 0;
    srcrect1.y = 0;
    srcrect1.w = 100;
    srcrect1.h = 100;
    dstrect1.x = 0;
    dstrect1.y = 0;
    dstrect1.w = 75;
    dstrect1.h = 25;
    
    SDL_BlitSurface( image, &srcrect1, windowSurface, &dstrect1 );
    
    //Update the surface
    SDL_UpdateWindowSurface( window );
    while ( true )
    {
        if ( SDL_PollEvent( &windowEvent ) )
        {
            if ( SDL_QUIT == windowEvent.type )
            {
                break;
            }
        }
    }
    SDL_FreeSurface( image );
    SDL_FreeSurface( imageSurface );
    SDL_FreeSurface( windowSurface );

    image = NULL;
    imageSurface = NULL;
    windowSurface = NULL;

    SDL_DestroyWindow( window );
    SDL_Quit( );

    return EXIT_SUCCESS;

}
