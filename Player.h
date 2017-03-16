//
// Created by jake on 15/03/17.
//

#ifndef SDL_PLAYER_H
#define SDL_PLAYER_H

#include "GameObject.h"


class Player : public GameObject {
public:

    void load(int x, int y, int w, int h, std::string textureID);

    void draw(SDL_Renderer* pRenderer);

    void update();

};


#endif //SDL_PLAYER_
