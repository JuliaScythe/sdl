//
// Created by jake on 15/03/17.
//

#ifndef SDL_PLAYER_H
#define SDL_PLAYER_H

#include "GameObject.h"


class Player : public GameObject {
public:

    void load(int x, int y, int width, int height, std::string textureID);
    void draw(SDL_Renderer* pRenderer);
    void update();
    void clean();


};


#endif //SDL_PLAYER_
