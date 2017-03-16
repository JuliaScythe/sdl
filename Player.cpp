//
// Created by jake on 16/03/17.
//

#include <string>
#include "Player.h"

void Player::load(int x, int y, int w, int h, std::string textureID) {
    GameObject::load(x, y, w, h, textureID);
}

void Player::draw(SDL_Renderer *pRenderer) {
    GameObject::draw(pRenderer);
}

void Player::update() {
    m_x -= 1;
}