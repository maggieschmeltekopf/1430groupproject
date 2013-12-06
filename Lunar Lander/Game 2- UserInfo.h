UserInfo.h

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "plotter.h"


using namespace std;

struct userInfo
{
    string username;
    string password;
    string passwordHint;

};

bool menu();
void CreateUser(userInfo user[]);
void Login(userInfo user[],userInfo attempt[]);
void ResetPassword(userInfo user[],userInfo attempt[]);

