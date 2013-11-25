#pragma once

#include "World.h"

#define ASSETS_FOLDER ".\\Assets\\"

class Game
{
public:
    Game();
    ~Game();
    void Run();

private:
    void Tick();

private:
    World world;
    bool running = false;
};

