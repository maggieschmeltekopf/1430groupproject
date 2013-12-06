#pragma once 

#include "World.h"
#include <string>
#include <fstream>
#include <ctime>
#include "Plotter.h"
#include <iostream>

using namespace std;

const string ASSETS_FOLDER = ".\\Assets\\";
const string LOGIN_FILE = "login.dat";
const string SOUNDS_FOLDER = ASSETS_FOLDER + "Sounds\\";
const string IMAGES_FOLDER = ASSETS_FOLDER + "Images\\";

struct PlayerInfo
{

};

class Game
{
public:
    Game();
    ~Game();

    void Run(bool showFPS = true);
    void Exit();
    void Login(string user, string pass);
    void CreateUser(PlayerInfo info);
    void ResetPassword(string user);

    void Update(double deltaTime);
    void Draw(double deltaTime);

private:
    void Tick();
    void DrawFPS();

private:
    World world;
    bool running;
    bool showFPS;
    ifstream inputFile;
    ofstream outputStream;

    Plotter plotter;

    double deltaTime;
    clock_t startTime;
    clock_t elaspedStartTime;

    int fpsActual;
    int fpsCounter;
};

