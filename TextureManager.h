//
// Created by jake on 13/03/17.
//

#ifndef SDL_TEXTUREMANAGER_H
#define SDL_TEXTUREMANAGER_H

#include <string>
#include <SDL_render.h>
#include <map>



class TextureManager {
    std::map<std::string, SDL_Texture *> m_textureMap;
public:
    bool load(std::string fileName, std::string id, SDL_Renderer *pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

    void draw(std::string id, int x, int y, int width, int height, SDL_Renderer *pRenderer,
              SDL_RendererFlip = SDL_FLIP_NONE);

    void drawFrame(std::string id, int x, int y, int width, int height, int currentRow, int currentFrame,
                   SDL_Renderer *pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);
    
    static TextureManager* Instance()
    {
        if(s_pInstance == 0)
        {
            s_pInstance = new TextureManager();
            return s_pInstance;
        }
        return s_pInstance;
    }

private:
    TextureManager() {}

    static TextureManager *s_pInstance;
};

typedef TextureManager TheTextureManager;

#endif //SDL_TEXTUREMANAGER_H
