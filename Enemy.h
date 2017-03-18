//
// Created by jake on 18/03/17.
//

#ifndef SDL_ENEMY_H
#define SDL_ENEMY_H


#include <SDL_render.h>
#include "GameObject.h"

class Enemy : public GameObject {
public:

    void load(int x, int y, int width, int height, std::string textureID);
    void draw(SDL_Renderer* pRenderer);
    void update();

};


#endif //SDL_ENEMY_H
