#include "SDL_utils.h"

void init(SDL_Window* &window, SDL_Renderer* &renderer, int SCREEN_WIDTH, int SCREEN_HEIGHT)
{
    window = SDL_CreateWindow("A Knight's Tale", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(renderer);
}

void quitSDL(SDL_Window* window, SDL_Renderer* renderer)
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void Sprite(SDL_Rect SpriteClips[])
{
    SpriteClips[0].x = 0;
    SpriteClips[0].y = 0;
    SpriteClips[0].w = 199;
    SpriteClips[0].h = 262;

    SpriteClips[1].x = 201;
    SpriteClips[1].y = 0;
    SpriteClips[1].w = 199;
    SpriteClips[1].h = 262;

    SpriteClips[2].x = 401;
    SpriteClips[2].y = 0;
    SpriteClips[2].w = 199;
    SpriteClips[2].h = 262;

    SpriteClips[3].x = 601;
    SpriteClips[3].y = 0;
    SpriteClips[3].w = 199;
    SpriteClips[3].h = 262;

    SpriteClips[4].x = 801;//Knight's jump
    SpriteClips[4].y = 0;
    SpriteClips[4].w = 199;
    SpriteClips[4].h = 262;

    SpriteClips[5].x = 1001;//Knight's stand still
    SpriteClips[5].y = 0;
    SpriteClips[5].w = 199;
    SpriteClips[5].h = 262;

    SpriteClips[6].x = 1201;
    SpriteClips[6].y = 0;
    SpriteClips[6].w = 199;
    SpriteClips[6].h = 262;

    SpriteClips[7].x = 1401;//Knight's attack
    SpriteClips[7].y = 0;
    SpriteClips[7].w = 199;
    SpriteClips[7].h = 262;

    SpriteClips[8].x = 1601;
    SpriteClips[8].y = 0;
    SpriteClips[8].w = 299;
    SpriteClips[8].h = 262;

    SpriteClips[9].x = 1001; //Boss's launching
    SpriteClips[9].y = 0;
    SpriteClips[9].w = 329;
    SpriteClips[9].h = 262;

    SpriteClips[10].x = 1901; //Knight's Sliding
    SpriteClips[10].y = 0;
    SpriteClips[10].w = 199;
    SpriteClips[10].h = 262;

    SpriteClips[11].x = 1401; //Monster's stand still and Boss's stunt
    SpriteClips[11].y = 0;
    SpriteClips[11].w = 199;
    SpriteClips[11].h = 262;

    SpriteClips[12].x = 1601;
    SpriteClips[12].y = 0;
    SpriteClips[12].w = 199;
    SpriteClips[12].h = 262;

    SpriteClips[13].x = 0;//Empty Space
    SpriteClips[13].y = 0;
    SpriteClips[13].w = 1;
    SpriteClips[13].h = 1;

    SpriteClips[14].x = 2101;//Super attack
    SpriteClips[14].y = 0;
    SpriteClips[14].w = 199;
    SpriteClips[14].h = 262;

    SpriteClips[15].x = 2301;
    SpriteClips[15].y = 0;
    SpriteClips[15].w = 199;
    SpriteClips[15].h = 262;

    SpriteClips[16].x = 2501;
    SpriteClips[16].y = 0;
    SpriteClips[16].w = 299;
    SpriteClips[16].h = 262;

    SpriteClips[17].x = 1801;//Rage boss
    SpriteClips[17].y = 0;
    SpriteClips[17].w = 199;
    SpriteClips[17].h = 262;

    SpriteClips[18].x = 2001;
    SpriteClips[18].y = 0;
    SpriteClips[18].w = 199;
    SpriteClips[18].h = 262;

    SpriteClips[19].x = 2201;
    SpriteClips[19].y = 0;
    SpriteClips[19].w = 249;
    SpriteClips[19].h = 262;

    SpriteClips[20].x = 1;//Smash ground
    SpriteClips[20].y = 263;
    SpriteClips[20].w = 940;
    SpriteClips[20].h = 261;

    SpriteClips[21].x = 1;
    SpriteClips[21].y = 525;
    SpriteClips[21].w = 940;
    SpriteClips[21].h = 261;

    SpriteClips[22].x = 1;
    SpriteClips[22].y = 787;
    SpriteClips[22].w = 940;
    SpriteClips[22].h = 261;

    SpriteClips[23].x = 1;
    SpriteClips[23].y = 1049;
    SpriteClips[23].w = 940;
    SpriteClips[23].h = 261;

    SpriteClips[24].x = 1;
    SpriteClips[24].y = 1311;
    SpriteClips[24].w = 940;
    SpriteClips[24].h = 261;

    SpriteClips[25].x = 1;
    SpriteClips[25].y = 1573;
    SpriteClips[25].w = 940;
    SpriteClips[25].h = 261;

    SpriteClips[26].x = 1;
    SpriteClips[26].y = 1835;
    SpriteClips[26].w = 940;
    SpriteClips[26].h = 261;

    SpriteClips[27].x = 1;
    SpriteClips[27].y = 2097;
    SpriteClips[27].w = 940;
    SpriteClips[27].h = 261;

    SpriteClips[28].x = 1; //Pause button
    SpriteClips[28].y = 0;
    SpriteClips[28].w = 49;
    SpriteClips[28].h = 49;

    SpriteClips[29].x = 51;
    SpriteClips[29].y = 0;
    SpriteClips[29].w = 49;
    SpriteClips[29].h = 49;

    SpriteClips[30].x = 101;
    SpriteClips[30].y = 0;
    SpriteClips[30].w = 49;
    SpriteClips[30].h = 49;

    SpriteClips[31].x = 151;
    SpriteClips[31].y = 0;
    SpriteClips[31].w = 49;
    SpriteClips[31].h = 49;
}

SDL_Texture* load_bg(SDL_Renderer* renderer, string path)
{
    SDL_Surface* loadedSurface = IMG_Load(path.c_str());
    SDL_SetColorKey(loadedSurface, SDL_TRUE, SDL_MapRGB(loadedSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_Texture* mapp = SDL_CreateTextureFromSurface(renderer, loadedSurface);
    SDL_FreeSurface(loadedSurface);
    return mapp;
}

void render_map(SDL_Renderer* renderer, SDL_Texture* mapp, SDL_Rect camera)
{
    SDL_Rect quadrad = {0, 0, camera.w, camera.h};
    SDL_RenderCopy(renderer, mapp, &camera, &quadrad);
}

void render_button(SDL_Renderer* renderer, SDL_Texture* button1, SDL_Texture* button2, SDL_Rect currentButton1, SDL_Rect currentButton2)
{
    SDL_Rect quadrad1 = {430, 200, 150, 80};
    SDL_RenderCopy(renderer, button1, &currentButton1, &quadrad1);

    SDL_Rect quadrad2 = {425, 300, 150, 80};
    SDL_RenderCopy(renderer, button2, &currentButton2, &quadrad2);
}

int render_super_slash(SDL_Renderer* renderer, SDL_Texture* superslash_l, SDL_Texture* superslash_r, int frame, int dis, bool direction, int camX, Monster monster[], Boss &boss)
{
    if(direction == false)
    {
        SDL_Rect quadrad = {frame - 300 - camX, 200, 200, 262};
        SDL_RenderCopy(renderer, superslash_l, NULL, &quadrad);
        frame-=4;
        for(int i=0; i<=9; i++)
        {
            if(quadrad.x - monster[i].mPosX + camX  >= 0 && quadrad.x - monster[i].mPosX + camX <= 5)
            {
                if(monster[i].health.w >= 10) monster[i].health.w-=10;
                else monster[i].health.w = 0;
            }
        }

        if(quadrad.x - boss.mPosX + camX - 50 >= 0 && quadrad.x - boss.mPosX + camX - 50 <= 5)
        {
            boss.health.w -= 10;
        }

        if(abs(frame - dis) >= 500) frame = -100;
    }
    else
    {
        SDL_Rect quadrad = {frame - 150 - camX, 200, 200, 262};
        SDL_RenderCopy(renderer, superslash_r, NULL, &quadrad);
        frame+=4;
        for(int i=0; i<=9; i++)
        {
            if(monster[i].mPosX - quadrad.x - camX - 80 >= 0 && monster[i].mPosX - quadrad.x - camX - 80 <= 5)
            {
                if(monster[i].health.w >= 10) monster[i].health.w-=10;
                else monster[i].health.w = 0;
            }
        }

        if(boss.mPosX - quadrad.x - camX - 100 >= 0 && boss.mPosX - quadrad.x - camX - 100 <= 5)
        {
            boss.health.w -= 10;
        }

        if(abs(frame - dis) >= 500) frame = 10000;
    }

    return frame;
}

int meteo_incoming(SDL_Texture* meteo, SDL_Renderer* renderer, int frame, int camX, int i)
{
    if(i == 0)
    {
        SDL_Rect quadrad = {2900 - camX, frame, 200, 300};
        SDL_RenderCopy(renderer, meteo, NULL, &quadrad);
        frame+=4;
    }

    else if(i == 1)
    {
        SDL_Rect quadrad = {3200 - camX, frame, 200, 300};
        SDL_RenderCopy(renderer, meteo, NULL, &quadrad);
        frame+=4;
    }

    else if(i == 2)
    {
        SDL_Rect quadrad = {3600 - camX, frame, 200, 300};
        SDL_RenderCopy(renderer, meteo, NULL, &quadrad);
        frame+=4;
    }
    return frame;
}

int render_meteo(int knight_mPosX, int rep, int &meteo_frame, SDL_Texture* danger_sign, SDL_Texture* meteo, SDL_Renderer* renderer, int camX, int &knight_health, int i)
{
    if(knight_mPosX >= 2600 && knight_mPosX <= 4500 && i == 0)//Meteo1
    {
        if(rep == 70)
        {
            meteo_frame = meteo_incoming(meteo, renderer, meteo_frame, camX, i);
            if(knight_mPosX >= 2800 && knight_mPosX <= 3000 && meteo_frame >= 100 && meteo_frame <= 200) knight_health--;

        }
        else
        {
            SDL_Rect quadrad = {2900 - camX, 10, 100, 100};
            SDL_RenderCopy(renderer, danger_sign, NULL, &quadrad);
            rep++;
        }
    }

    else if(knight_mPosX >= 2900 && knight_mPosX <= 4500 && i == 1)//Meteo2
    {
        if(rep == 70)
        {
            meteo_frame = meteo_incoming(meteo, renderer, meteo_frame, camX, i);
            if(knight_mPosX >= 3100 && knight_mPosX <= 3300 && meteo_frame >= 100 && meteo_frame <= 200) knight_health--;

        }
        else
        {
            SDL_Rect quadrad = {3200 - camX, 10, 100, 100};
            SDL_RenderCopy(renderer, danger_sign, NULL, &quadrad);
            rep++;
        }
    }

    else if(knight_mPosX >= 3200 && knight_mPosX <= 5000 && i == 2)//Meteo3
    {
        if(rep == 70)
        {
            meteo_frame = meteo_incoming(meteo, renderer, meteo_frame, camX, i);
            if(knight_mPosX >= 3500 && knight_mPosX <= 3700 && meteo_frame >= 100 && meteo_frame <= 200) knight_health--;

        }
        else
        {
            SDL_Rect quadrad = {3600 - camX, 10, 100, 100};
            SDL_RenderCopy(renderer, danger_sign, NULL, &quadrad);
            rep++;
        }
    }
    return rep;
}

void render_items(SDL_Renderer* renderer, SDL_Texture* item, int camX)
{
    SDL_Rect quadrad = {5350 - camX, 330, 80, 50};
    SDL_RenderCopy(renderer, item, NULL, &quadrad);
}

void back_button(SDL_Renderer* renderer, SDL_Texture* backbut, SDL_Rect current_back)
{
    SDL_Rect quadrad = {10, 10, 150, 80};
    SDL_RenderCopy(renderer, backbut, &current_back, &quadrad);
}
