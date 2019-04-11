typedef struct vie
{
	int nb;
	SDL_Rect position;
	SDL_Surface *image[4];
	SDL_Surface *gameover;
}vie;
void initialiser_vie(vie *vie){
vie->position.x=700;
vie->position.y=40;
vie->nb=0;
vie->image[0] = IMG_Load("v1.png");
vie->image[1] = IMG_Load("v2.png");
vie->image[2] = IMG_Load("v3.png");
vie->image[3] = IMG_Load("v4.png");
vie->gameover = IMG_Load("gameover.png");
}
void afficher_vie(SDL_Surface *ecran,vie *vie){
SDL_BlitSurface(vie->image[vie->nb],NULL, ecran,&vie->position);
if(vie->nb==0){SDL_BlitSurface(vie->gameover,NULL, ecran,&vie->position);}
}
