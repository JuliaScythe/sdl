//
// Created by jake on 18/03/17.
//

#ifndef SDL_ENEMY_H
#define SDL_ENEMY_H


#include <SDL_render.h>
#include "GameObject.h"
#include "SDLGameObject.h"

class Enemy : public SDLGameObject {
public:

    Enemy(const LoaderParams *pParams);

    virtual void draw();

    virtual void update();

    virtual void clean();

};


#endif //SDL_ENEMY_H
