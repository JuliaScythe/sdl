//
// Created by jake on 15/03/17.
//

#ifndef SDL_PLAYER_H
#define SDL_PLAYER_H

#include "GameObject.h"
#include "SDLGameObject.h"


class Player : public SDLGameObject {
public:

    Player(const LoaderParams *pParams);

    virtual void draw();

    virtual void update();

    virtual void clean();



};


#endif //SDL_PLAYER_
