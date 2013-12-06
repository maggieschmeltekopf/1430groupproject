#include <iomanip>
#include "Game.h"

Game::Game()
{
}


Game::~Game()
{
}

void Game::Run(bool showFPS)
{
    this->showFPS = showFPS;

    running = true;
    startTime = clock();

    while (running)
    {
        Tick();
    }
}

void Game::Exit()
{
    running = false;
}

void Game::Tick()
{
    // Update Timers
    elaspedStartTime = clock();
    Update(deltaTime);
    Draw(deltaTime);
    deltaTime = (clock() - elaspedStartTime) / static_cast<double>(CLOCKS_PER_SEC);
}

void Game::Update(double deltaTime)
{
    static double oneSecTimer = 0;
    oneSecTimer += deltaTime;
    if (oneSecTimer > 1)
    {
        fpsActual = fpsCounter;
        fpsCounter = 0;
        oneSecTimer = 0;
    }
    world.Update(deltaTime);
}

void Game::Draw(double deltaTime)
{
    fpsCounter++;
    if (showFPS)
    {
        plotter.move(0, 0);
        cout << "FPS: " << fpsActual;
    }
    world.Draw(deltaTime);
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
