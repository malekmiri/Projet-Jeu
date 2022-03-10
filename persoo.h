#ifndef FCT_H_INCLUDED 
#define FCT_H_INCLUDED

typedef struct 
{
SDL_Surface* image;
SDL_Rect imagepos;
int vies;
}Vie;
typedef struct 
{
SDL_Surface* image;
SDL_Rect imagepos;
int scr;
}Score;
typedef struct 
{
SDL_Surface* spritsheet;
SDL_Rect MatPos[4][4];
double vitesse,acceleration;
Vie vie;
Score score;
int direction;
}Personne; 
void initPerso1(Personne *p);
void initPerso2(Personne *p);
void afficherPerso1(Personne p, SDL_Surface * screen);
void afficherPerso2(Personne p, SDL_Surface * screen);
void deplacerPerso (Personne *p, , int dt);
void animerPerso (Personne* p);
void saut (Personne* p);
void FreePerso(Personne p);



#endif 
