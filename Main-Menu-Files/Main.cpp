/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/

#include <iostream>
#include "userInfo.h"
#include "plotter.h"
#include "Menu.h"
#include "Picture.h"
#include "GameMenu.h"

using namespace std;

int main()
{
    //Call menu object
      Menu a;
     GameMenu player;
     userInfo user[100];
     userInfo attempt[100];
    //Call introduction
     a.intro();
    //Call Login function
     a.Login();
    return 0;
}
