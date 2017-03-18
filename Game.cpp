//
// Created by jake on 12/03/17.
//
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "Game.h"
#include "TextureManager.h"


bool Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {
    // attempt to initialize SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "SDL init success\n";
        // init the window
        m_pWindow = SDL_CreateWindow(title, xpos, ypos,
                                     width, height, fullscreen ? SDL_WINDOW_FULLSCREEN : 0);
        if(m_pWindow != 0) // window init success
        {
            std::cout << "window creation success\n";
            m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);
            if(m_pRenderer != 0) // renderer init success
            {
                std::cout << "renderer creation success\n";
                SDL_SetRenderDrawColor(m_pRenderer,
                                       255,0,0,255);
            }
            else
            {
                std::cout << "renderer init fail\n";
                return false; // renderer init fail
            }
        }
        else
        {
            std::cout << "window init fail\n";
            return false; // window init fail
        }
    }
    else
    {
        std::cout << "SDL init fail\n";
        return false; // SDL init fail
    }

    // Load animate-alpha.png as a texture with key 'animate'
    if(!TheTextureManager::Instance()->load("assets/animate-alpha.png", "animate", m_pRenderer)) return false;

    m_go = new GameObject();
    m_player = new Player();

    m_go->load(100, 100, 128, 82, "animate");
    m_player->load(300, 300, 128, 82, "animate");

    m_gameObjects.push_back(m_go);
    m_gameObjects.push_back(m_player);

    std::cout << "init success\n";
    m_bRunning = true; // everything inited successfully

    return true;
}

void Game::update() {
    for(std::vector<GameObject*>::size_type i = 0; i != m_gameObjects.size(); i++)
    {
        m_gameObjects[i]->update();
    }
}

void Game::render() {
    SDL_RenderClear(m_pRenderer);

    // loop through our objects and draw them
    for(std::vector<GameObject*>::size_type i = 0; i != m_gameObjects.size(); i++)
    {
        m_gameObjects[i]->draw(m_pRenderer);
    }

    SDL_RenderPresent(m_pRenderer);

}

void Game::handleEvents() {
    SDL_Event event;
    if(SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                m_bRunning = false;
                break;
            default:
                break;
        }
    }
}

void Game::clean() {
    std::cout << "Cleaning...";
    SDL_DestroyWindow(m_pWindow);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_Quit();
    std::cout << "Complete" << std::endl;
}
