#include "Game.h"


Game::Game()
{
}


Game::~Game()
{
}

void Game::Run()
{
    while (running)
    {
        Tick();
    }
}

void Game::Tick()
{
    // Update timers
}
