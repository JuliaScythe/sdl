#include "Game.h"

Game* g_game = 0;


int main() {
    std::cout << "GAME INIT attempt:";
    if (TheGame::Instance()->init("WOOT", 100, 100, 640, 480, false)) {
        std::cout << " SUCCESS!";

        while (TheGame::Instance()->running()) {
            TheGame::Instance()->handleEvents();
            TheGame::Instance()->update();
            TheGame::Instance()->render();
            SDL_Delay(10);
        }
    } else {
        std::cout << "FAIL: " << SDL_GetError() << "\n";
        return -1;
    }

    std::cout << "\nGAME CLOSING";
    TheGame::Instance()->clean();
}


