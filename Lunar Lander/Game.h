#pragma once 

#include "World.h"
#include <string>

using namespace std;

const string ASSETS_FOLDER = ".\\Assets\\";
const string LOGIN_FILE = "login.dat";

struct PlayerInfo
{

};

class Game
{
public:
    Game();
    ~Game();

    void Run();
    void Exit();
    void Login(string user, string pass);
    void CreateUser(PlayerInfo info);
    void ResetPassword(string user);

private:
    void Tick();

private:
    World world;
    bool running;
    ifstream inputFile;
    ofstream outputStream;
};

