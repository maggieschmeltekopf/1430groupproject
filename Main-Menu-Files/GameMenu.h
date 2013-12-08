/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "Plotter.h"
#include "userInfo.h"
#include "picture.h"

using namespace std;

// This class will be used
//once user logins successfully
class GameMenu
{
    public:
        GameMenu();
        void gameMenu();
        void settings();
        void gamePlay();
        void PlaySounds();
        void exitGame();

};

#endif // GAMEMENU_H
