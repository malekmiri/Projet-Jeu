#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct
{
SDL_Surface *spritesheet;
SDL_Rect pos;
int direction;

}Ennemi;


/////////////////////////////////////////////
void initEnnemi2(Ennemi *e);
void afficherEnnemi(Ennemi e,SDL_Surface *screen);
void animerEnnemi(Ennemi *e);
void deplacerEnnemi(Ennemi *e);
int collisionp(Personne P,Ennemi e);
void deplacerIA(Ennemi *e,SDL_RECT pos);
void freeEnnemi(Ennemi e);

#endif // FONCTION_H_INCLUDED
