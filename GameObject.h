//
// Created by jake on 15/03/17.
//

#ifndef SDL_GAMEOBJECT_H
#define SDL_GAMEOBJECT_H


#include <iostream>
#include <SDL.h>
#include "LoaderParams.h"

class GameObject {
public:
    virtual void draw()=0;

    virtual void update()=0;

    virtual void clean()=0;

protected:

    GameObject(const LoaderParams *pParams) {}

    virtual ~GameObject() {};
};


#endif //SDL_GAMEOBJECT_H
