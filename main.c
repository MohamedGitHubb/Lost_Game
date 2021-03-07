#include "SDL/SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>

#include <SDL/SDL_ttf.h> 
void pause();
 
int main(int argc, char *argv[])
{
 SDL_Surface *ecran = NULL, *imageDeFond = NULL, *play = NULL ,*settings= NULL , *credits=NULL,*exit=NULL,*image5=NULL,*image6=NULL,*image7=NULL, *play1=NULL, *credits1=NULL, *settings1=NULL, *exit1=NULL,*image8=NULL, *image10 = NULL ,*VOLUMEM1 = NULL , *VOLUMEP=NULL,*VOLUMEP1=NULL,*mute=NULL,*mute1=NULL,*fullscreen=NULL,*VOLUMEM = NULL ,*fullscreen1 = NULL , *back1=NULL,*back=NULL;
   

 SDL_Rect positionFond ,positionplay,positionsettings ,positionexit
 ,positioncredits,positionclic,positionimage5,positionimage6,positionimage7,
positionimage8,positionimage9,positionplay1,positionsettings1
 ,positionexit1 ,positioncredits1,positionVOLUMEP1,positionVOLUMEP, positionVOLUMEM1,positionVOLUMEM,positionmute1,positionmute, positionfullscreen,positionfullscreen1,positionback1,positionback;
 



 putenv("SDL_VIDEO_CENTERED=1");//centrer l ecran
	imageDeFond = IMG_Load("bg.png");

    positionFond.x = 0;
    positionFond.y = 0;
    positionsettings.x = 170;
    positionsettings.y = 75;
    positioncredits.x = 170;
    positioncredits.y = 150;
    positionplay.x = 170;
    positionplay.y = 0;
    positionexit.x = 170;
    positionexit.y = 225;
    positionimage5.x = 0;
    positionimage5.y = 0;
    positionimage6.x = 0;
    positionimage6.y = 0;
    positionimage7.x = 0;
    positionimage7.y = 0;
    positionsettings1.x = 170;
    positionsettings1.y = 75;
    positioncredits1.x = 170;
    positioncredits1.y = 150;
    positionplay1.x = 170;
    positionplay1.y = 0;
    positionexit1.x = 170;
    positionexit1.y = 225;
    positionimage8.x = 0;
    positionimage8.y = 0;
    positionmute1.x = 170;
    positionmute1.y = 150;
    positionmute.x = 170;
    positionmute.y = 150;
    positionfullscreen1.x = 170;
    positionfullscreen1.y = 225;
    positionfullscreen.x = 170;
    positionfullscreen.y = 225;
    positionback1.x = 390;
    positionback1.y = 200;
    positionback.x = 390;
    positionback.y = 200;
    positionVOLUMEM1.x = 170;
    positionVOLUMEM1.y = 75;
    positionVOLUMEP1.x =170;
    positionVOLUMEP1.y =0;
    positionVOLUMEP.x = 170;
    positionVOLUMEP.y = 0;
    positionVOLUMEM.x = 170;
    positionVOLUMEM.y = 75;




      
     
    if (Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
     {
        printf("%s",Mix_GetError());
     }      


     Mix_Music *son;
     son = Mix_LoadMUS("son1.mp3");


     Mix_Music *music;
     music = Mix_LoadMUS("son.mp3");
     Mix_PlayMusic(music,-1);
 	
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();		
			
 

    ecran = SDL_SetVideoMode(1250,700, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
    
 








 SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
 


   //creer une police
TTF_Font *fontTest=NULL;
fontTest=TTF_OpenFont("Hitman.ttf",75);
SDL_Color fontColor={255,255,255};
//creer zone de texte

SDL_Surface *texte1;
texte1=TTF_RenderText_Blended(fontTest,"aziiz1 .. ",fontColor);
SDL_Rect texte1Position;
texte1Position.x=530;
texte1Position.y=40;
SDL_BlitSurface(texte1,NULL,imageDeFond,&texte1Position);
SDL_Flip(ecran);   











play = IMG_Load("play.png");
    SDL_BlitSurface(play, NULL, ecran, &positionplay);
 

 settings = IMG_Load("settings.png");

    SDL_BlitSurface(settings, NULL, ecran, &positionsettings);

credits = IMG_Load("credits.png");

    SDL_BlitSurface(credits, NULL, ecran, &positioncredits);

exit = IMG_Load("exit.png");
     
    SDL_BlitSurface(exit,&positionFond,ecran,&positionexit);

play1 = IMG_Load("play1.png");
     
    SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);

settings1 = IMG_Load("settings1.png");
     
    SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);

credits1 = IMG_Load("credits1.png");
     
    SDL_BlitSurface(credits1,&positionFond,ecran,&positioncredits1);

exit1 = IMG_Load("exit1.png");
    SDL_BlitSurface(exit1,&positionFond,ecran,&positionexit1);


SDL_Flip(ecran);
image6 = IMG_Load("bg.png");

image5 = IMG_Load("image5.png");

image7 = IMG_Load("credi.png");

VOLUMEP = IMG_Load("VOLUME+.png");

VOLUMEM = IMG_Load("VOLUME-.png");

back =IMG_Load("back.png");
 
mute =IMG_Load("mute.png");
 
fullscreen = IMG_Load("fullscreen.png");




VOLUMEP1=IMG_Load("VOLUME+1.png");

VOLUMEM1=IMG_Load("VOLUME-1.png");

fullscreen1=IMG_Load("fullscreen1.png");



mute1=IMG_Load("mute1.png");



back1=IMG_Load("back1.png");



		
   int done = 1,i=50;
   int k,etat=0,s=1,v=60;
   while(done)
    {	
   SDL_Event event;

	if(etat==0){
	SDL_BlitSurface(imageDeFond,&positionFond,ecran,NULL);
		 if(k==1)
		{
			SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);
				SDL_BlitSurface(settings,&positionFond,ecran,&positionsettings);
				SDL_BlitSurface(credits,&positionFond,ecran,&positioncredits);
				SDL_BlitSurface(exit,&positionFond,ecran,&positionexit);
			
				
     				
      
			
		}
		else if (k==2)
		{
			SDL_BlitSurface(play,&positionFond,ecran,&positionplay);
				SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);
				 SDL_BlitSurface(credits,&positionFond,ecran,&positioncredits);
				 SDL_BlitSurface(exit,&positionFond,ecran,&positionexit);
			
		}
		else if (k==3)
		{
			SDL_BlitSurface(play,&positionFond,ecran,&positionplay);
				SDL_BlitSurface(settings,&positionFond,ecran,&positionsettings);
				 SDL_BlitSurface(credits1,&positionFond,ecran,&positioncredits1);
				 SDL_BlitSurface(exit,&positionFond,ecran,&positionexit);
 			
		}
		else if (k==4)
		{
			SDL_BlitSurface(play,&positionFond,ecran,&positionplay);
				SDL_BlitSurface(settings,&positionFond,ecran,&positionsettings);
				 SDL_BlitSurface(credits,&positionFond,ecran,&positioncredits);
				 SDL_BlitSurface(exit1,&positionFond,ecran,&positionexit1);
			
		}	
	
    while(SDL_PollEvent(&event))
	{
    
	switch(event.type)
        {
           case SDL_QUIT:
           done = 0;
		
           break;
           case SDL_KEYDOWN:
	{
            
		
               if(event.key.keysym.sym == SDLK_ESCAPE)
		{
               		done = 0;
			
		}
 		else if (event.key.keysym.sym == SDLK_UP)
		{
			if (k==1)
			{
				k=4;
			}
			else
			{
				k--;
			}
		}
               
 		else if (event.key.keysym.sym == SDLK_DOWN)
		{
			
         		if (k==4)
			{
				k=1;
			}
			else
			{
				k++;
			}
		}
		else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))
		{
			if (k==1)
			{	SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
			SDL_Flip(ecran);
			
			SDL_Delay(5000);
			}
			else if (k==2)
			{ 
			etat=1;
			}
			else if (k==3)
			{ 

	SDL_BlitSurface(image7,&positionFond,ecran,&positionimage7);
SDL_BlitSurface(back,&positionFond,ecran,&positionback);


			SDL_Flip(ecran);
			Mix_PlayMusic(son,0);
			SDL_Delay(5000);
			}
			else if (k==4)
			{ 
			done=0;
			
			}
			
			
		}
               break;
	}	

		case SDL_MOUSEBUTTONDOWN:
		{
		if (event.button.button ==SDL_BUTTON_LEFT)
		{
			positionclic.x=event.button.x;
			positionclic.y =event.button.y;
			if (event.button.x>600 && event.button.x<635 && event.button.y>480 && event.button.y<500)
			{
			image6 = IMG_Load("image6.png");
				SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
			SDL_Flip(ecran);
     			
			SDL_Delay(5000);
			}

			else if (event.button.x>600 && event.button.x<635 && event.button.y>520 && event.button.y<580)//option
			{
			etat=1;

			}
			else if (event.button.x>600 && event.button.x<635 && event.button.y>580 && event.button.y<655)//about
			{
			 image7 = IMG_Load("credi.png");
				SDL_BlitSurface(image7,&positionFond,ecran,&positionimage7);
SDL_BlitSurface(back,&positionFond,ecran,&positionback);
			SDL_Flip(ecran);
     			Mix_PlayMusic(son,0);
			SDL_Delay(5000);
			}
			else if (event.button.x>600 && event.button.x<635 && event.button.y>655 && event.button.y<680)//exit
			{
			 done=0;
     			Mix_PlayMusic(son,0);
			}


	}//if

	}//case
		case SDL_MOUSEMOTION:
		{
	        	positionclic.x=event.motion.x;
			positionclic.y =event.motion.y;
			if (event.motion.x>600 && event.motion.x<635&& event.motion.y>480 && event.motion.y<500)//continuer
			{SDL_BlitSurface(play1,&positionFond,ecran,&positionplay1);
			
			k=1;}

			else if (event.motion.x>600 && event.motion.x<635 && event.motion.y>520 && event.motion.y<580)//option
			{SDL_BlitSurface(settings1,&positionFond,ecran,&positionsettings1);
			
			k=2;
			

			}
			else if (event.motion.x>600 && event.motion.x<635 && event.motion.y>580 && event.motion.y<655)//credit
			{SDL_BlitSurface(credits1,&positionFond,ecran,&positioncredits1);
			 k=3;
			}
			else if (event.motion.x>600 && event.motion.x<635 && event.motion.y>655 && event.motion.y<680)//exit
			{ 
SDL_BlitSurface(exit1,&positionFond,ecran,&positionexit1);
			 k=4;
			}

	
	
       	}//case

             
        }//switch


}
}
 		else if(etat==1)
	      	{
		SDL_BlitSurface(image6,&positionFond,ecran,&positionimage6);
		if(s==1)
		 {
SDL_BlitSurface(VOLUMEP1,&positionFond,ecran,&positionVOLUMEP1);
				SDL_BlitSurface(VOLUMEM,&positionFond,ecran,&positionVOLUMEM);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
				

		 }
		else if(s==2)
		 {
SDL_BlitSurface(VOLUMEP,&positionFond,ecran,&positionVOLUMEP);
				SDL_BlitSurface(VOLUMEM1,&positionFond,ecran,&positionVOLUMEM1);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
					
				
		 }
		else if(s==3)
		 {
			SDL_BlitSurface(VOLUMEP,&positionFond,ecran,&positionVOLUMEP);
				SDL_BlitSurface(VOLUMEM,&positionFond,ecran,&positionVOLUMEM);
				SDL_BlitSurface(mute1,&positionFond,ecran,&positionmute1);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
					
				
		 }
		else if(s==4)
		 {
			SDL_BlitSurface(VOLUMEP,&positionFond,ecran,&positionVOLUMEP);
				SDL_BlitSurface(VOLUMEM,&positionFond,ecran,&positionVOLUMEM);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen1,&positionFond,ecran,&positionfullscreen1);
				SDL_BlitSurface(back,&positionFond,ecran,&positionback);
				
		 }
		else if(s==5)
		 {
			SDL_BlitSurface(VOLUMEP,&positionFond,ecran,&positionVOLUMEP);
				SDL_BlitSurface(VOLUMEM,&positionFond,ecran,&positionVOLUMEM);
				SDL_BlitSurface(mute,&positionFond,ecran,&positionmute);
				SDL_BlitSurface(fullscreen,&positionFond,ecran,&positionfullscreen);
				SDL_BlitSurface(back1,&positionFond,ecran,&positionback1);		
				
		 }
		

	while(SDL_PollEvent(&event))
    	{
	switch(event.type)
        {
           case SDL_QUIT:
           done = 0;
		
           break;
           case SDL_KEYDOWN:
	{
            
		
               if(event.key.keysym.sym == SDLK_ESCAPE)
		{
               		//done = 0;
			ecran = SDL_SetVideoMode(800,600, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
		}
 		else if (event.key.keysym.sym == SDLK_UP)
		{
			if (s==1)
			{
				s=5;
			}
			else
			{
				s--;
			}
		}
               
 		else if (event.key.keysym.sym == SDLK_DOWN)
		{
			
         		if (s==5)
			{
				s=1;
			}
			else
			{
				s++;
			}
		}
		else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))
		{
			if (s==1)
			{ 
			v+=40;
			Mix_VolumeMusic(v);
			}
			else if (s==2)
			{ 
			v-=40;
			Mix_VolumeMusic(v);
			}
			else if (s==3)
			{ v=0;
			Mix_VolumeMusic(v);

			
			}
			else if (s==4)
                        {ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN); 
                        }   
                        else if(s==5)
                        { etat=0;
			}}}
		
               
	
	
	case SDL_MOUSEBUTTONDOWN:
		{
		if (event.button.button ==SDL_BUTTON_LEFT)
		{
			positionclic.x=event.button.x;
			positionclic.y =event.button.y;
			if (event.button.x>1200 && event.button.x<1235 && event.button.y> 1280 && event.button.y<1500)//yzid el volu
			{
			v+=40;
			Mix_VolumeMusic(v);
			}

			else if (event.button.x>600 && event.button.x<635 && event.button.y>520 && event.button.y<580)//yon90S
			{
			v-=40;
			Mix_VolumeMusic(v);

			}
			else if (event.button.x>600 && event.button.x<635 && event.button.y> 580&& event.button.y<655)//NO SOUND 
			{
			 v=0;
			Mix_VolumeMusic(v);
			}
			else if (event.button.x>600 && event.button.x<635 && event.button.y>655 && event.button.y<680)//fullscreen
			{
			 ecran = SDL_SetVideoMode(790,441, 32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
etat=0;
			}
			else if (event.button.x>640 && event.button.x<675 && event.button.y>655 && event.button.y<680)//back
			{
			 etat=0;
			}
			


	}//if

	}//case
		case SDL_MOUSEMOTION:
		{
	        	positionclic.x=event.motion.x;
			positionclic.y =event.motion.y;
			if (event.motion.x>290 && event.motion.x<530 && event.motion.y>50 && event.motion.y<103)
			{
			s=1;
			}

			else if (event.motion.x>290&& event.motion.x<530&& event.motion.y>125 && event.motion.y<178)
			{
			s=2;
			}
			else if (event.motion.x>290&& event.motion.x<530 && event.motion.y>200 && event.motion.y<253)
			{
			s=3;
			}
			else if (event.motion.x>290 && event.motion.x<530 && event.motion.y>275 && event.motion.y<328)
			{
			s=4;
			}
			else if (event.motion.x>290 && event.motion.x<530 && event.motion.y>350 && event.motion.y<403)
			{
			s=5;
			}
			
	
	
       	}//case

             
        }//switch
			
	}//while	


	     
		}
SDL_Flip(ecran);
}//while
Mix_PlayMusic(music,-1);
     

     





    
   // pause();

    SDL_FreeSurface(imageDeFond);
    SDL_FreeSurface(play);
    SDL_FreeSurface(exit);
    SDL_FreeSurface(credits);
    SDL_FreeSurface(settings);
    SDL_FreeSurface(image5);
    SDL_FreeSurface(image6);
    SDL_FreeSurface(image7);
    SDL_FreeSurface(play1);
    SDL_FreeSurface(settings1);
    SDL_FreeSurface(exit1);
    SDL_FreeSurface(credits1);
SDL_FreeSurface(VOLUMEM1);
    SDL_FreeSurface(VOLUMEP1);
    SDL_FreeSurface(exit1);
    SDL_FreeSurface(fullscreen1);
    SDL_FreeSurface(back1);
SDL_FreeSurface(texte1);
  
    SDL_FreeSurface(image8);
     TTF_CloseFont(fontTest);
     TTF_Quit();
    SDL_Quit();
 
    return EXIT_SUCCESS;
}
 
void pause()
{
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
