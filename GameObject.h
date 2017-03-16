//
// Created by jake on 15/03/17.
//

#ifndef SDL_GAMEOBJECT_H
#define SDL_GAMEOBJECT_H


#include <iostream>
#include <SDL.h>

class GameObject {
public:
    virtual void load(int x, int y, int width, int height, std::string textureID);
    virtual void draw(SDL_Renderer* pRenderer) {std::cout << "draw go";}
    virtual void update() {std::cout << "update go";}
    virtual void clean() {std::cout << "clean go";}

protected:
    int m_x;
    int m_y;
};


#endif //SDL_GAMEOBJECT_H
