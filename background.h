
#ifndef background_H_INCLUDED
#define background_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>


typedef struct bg
	{
        SDL_Surface *back ;
        SDL_Rect posbackground;
	SDL_Suface* anim1[100];
	SDL_Suface* anim1[100];
	int img1,img2;
	
	}bg;

    void initBack(bg * b);
    void afficherBack(bg b, SDL_Surface * screen);
    void animerback(bg *e);
    int collisionPP (Personne p, SDL_Surface *masque);
    void scrolling (bg *b, int direction, int pasAvancement);
    void free_memory (bg * b,Mix_Music *musique);



    #endif
