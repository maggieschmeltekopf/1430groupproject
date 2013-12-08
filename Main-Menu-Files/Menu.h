/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "plotter.h"
#include "Picture.h"

using namespace std;

// This class has the introductionto
//the game and lets the user login

class Menu
{
    public:
    Menu();
    void intro();
    void Login();

};

#endif // MENU_H
