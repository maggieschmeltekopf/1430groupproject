#include "Game.h"
#include <Windows.h>
#include <cstdlib>

#include <iostream>

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0502
#endif

#pragma comment(lib, "kernel32")
BOOL WINAPI SetConsoleFont(HANDLE hOutput, DWORD fontIndex);

using namespace std;

void SetUpConsole();

int main()
{
    SetUpConsole();

    Game g;
    g.Run();
    
    cin.get();
    return 0;
}

void SetUpConsole()
{
    HANDLE pConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD c = COORD();
    c.X = 168;
    c.X = 60;
    c.Y = 58;

    COORD fontSize = COORD();
    fontSize.X = 2;
    fontSize.Y = 5;

    //SetConsoleFont(pConsole, 0);
    SetConsoleScreenBufferSize(pConsole, c);

    SendMessage(GetConsoleWindow(), WM_SYSCOMMAND, SC_MAXIMIZE, 0);
}