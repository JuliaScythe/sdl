//
// Created by jake on 15/03/17.
//

#ifndef SDL_GAMEOBJECT_H
#define SDL_GAMEOBJECT_H


#include <iostream>
#include <SDL.h>

class GameObject {
public:
     void load(int x, int y, int width, int height, std::string textureID);
     void draw(SDL_Renderer* pRenderer);
     void update();
     void clean() {std::cout << "clean go";}

protected:

    std::string m_textureID;

    int m_currentFrame;
    int m_currentRow;

    int m_x;
    int m_y;

    int m_width;
    int m_height;
};


#endif //SDL_GAMEOBJECT_H
