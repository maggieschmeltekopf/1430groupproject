#pragma once 

#include "World.h"
#include <string>

using namespace std;

#define ASSETS_FOLDER ".\\Assets\\"

struct PlayerInfo
{

};

class Game
{
public:
    Game();
    ~Game();

    void Run();
    void Login(string user, string pass);
    void CreateUser(PlayerInfo info);
    void ResetPassword(string user);

private:
    void Tick();

private:
    World world;
    bool running = false;
};

