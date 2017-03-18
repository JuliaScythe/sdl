//
// Created by jake on 18/03/17.
//

#include "Enemy.h"
#include "GameObject.h"

void Enemy::load(int x, int y, int w, int h, std::string textureID) {
    GameObject::load(x, y, w, h, textureID);
}

void Enemy::draw(SDL_Renderer* pRenderer) {
    GameObject::draw(pRenderer);
}

void Enemy::update() {
    m_y += 1;
    m_x += 1;
    m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}