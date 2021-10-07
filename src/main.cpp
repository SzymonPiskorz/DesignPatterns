#include <iostream>
#include "../include/Game.h"
#include <SDL.h>
#include <iostream>

#include "../include/ClayBrickFactory.h"
#include "../include/LegoBrickFactory.h"
#include "../include/WoodBrickFactory.h"

void drawBricks(std::vector<Brick*> bricks)
{
    for(Brick* brick: bricks)
    {
        brick->draw();
    }
}

void createBricks()
{
    Factory* clayFactory;
    std::vector<Brick*>cBricks = clayFactory->getBricks(5);
    drawBricks(cBricks);
    Factory* legoFactory;
    std::vector<Brick*>lBricks = legoFactory->getBricks(6);
    drawBricks(lBricks);
    Factory* woodFactory;
    std::vector<Brick*>wBricks = woodFactory->getBricks(4);
    drawBricks(wBricks);

}

int main(int argc, char** argv)
{
    createBricks();

    Game* game = new Game();
    game->init("yes", 150,250,800,600, SDL_WINDOW_INPUT_FOCUS);

    while(game->IsRunning())
    {
        game->HandleEvents();
        game->Update();
        game->Render();
    }

    game->CleanUp();

    return 0;
}