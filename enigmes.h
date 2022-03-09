#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>

typedef struct
{
char question[200];
char reponse1[200];
char reponse2[200];
char reponse3[200];
int numrepjuste;
SDL_Surface *back;
SDL_Rect posback;
SDL_Surface *q,*rep1,*rep2,*rep3;
SDL_Rect posq,posrep1,posrep2,posrep3;
TTF_Font *police;
animation nm;
}enigme;

typedef struct score 
{
	SDL_Rect ps;
 	SDL_Surface *fond1;
	int scores;
}score;
typedef struct
{
SDL_Surface *anim[];
int num;
int direction;
}animation;


void genererEnigme(enigme * e, char *nomfichier);

void init_backenigme(enigme *e);
void init_ttf(enigme *e);
void afficherEnigme(enigme e, SDL_Surface *screen);

int resultat(int choix,score *s,enigme *e);
void affichresultat(SDL_Surface *Vrai,SDL_Surface *Faux,SDL_Rect positionV,SDL_Rect positionF,SDL_Surface *screen,int choix,score s,enigme e,int r);
void animer (enigmes *e);
void sauvgarder (personne p, background b, char *nomfichier);
int charger (personne *p, background *b, char *nomfichier);

