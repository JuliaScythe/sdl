//
// Created by jake on 12/03/17.
//

#ifndef SDL_GAME_H
#define SDL_GAME_H

#include <SDL.h>
#include "TextureManager.h"
#include "Player.h"

class Game {
public:

    Game() {}
    ~Game() {}

    bool init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
    void render();
    void update();
    void handleEvents();
    void clean();

    bool running() { return m_bRunning; }

private:
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;

    SDL_Texture* m_pTexture;
    SDL_Rect m_sourceRectangle;
    SDL_Rect m_destinationRectangle;

    int m_currentFrame;
    bool m_bRunning;

    GameObject m_go;
    Player m_player;

};


#endif //SDL_GAME_H
