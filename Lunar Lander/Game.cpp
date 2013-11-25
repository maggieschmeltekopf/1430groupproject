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

void Login(string user, string pass)
{

}

void CreateUser(PlayerInfo info)
{
    
}

void ResetPassword(string user)
{

}
