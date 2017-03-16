//
// Created by jake on 15/03/17.
//

#ifndef SDL_PLAYER_H
#define SDL_PLAYER_H

#include <SDL.h>
#include "GameObject.h"


class Player : public GameObject {
public:

    void draw(SDL_Renderer* pRenderer)
    {
        GameObject::draw(nullptr);
        std::cout << "draw player";
    }

    void update()
    {
        std::cout << "update player";
        m_x = 10;
        m_y = 20;
    }

    void clean()
    {
        GameObject::clean();
        std::cout << "clean player";
    }
};


#endif //SDL_PLAYER_H
