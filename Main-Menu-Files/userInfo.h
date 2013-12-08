/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/
#ifndef USERINFO_H
#define USERINFO_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include "plotter.h"
#include "GameMenu.h"


using namespace std;

//Holds userInformation
struct userInfo
{
    string username;
    string password;
    string passwordHint;

};
/*
***********************************************
Name: createUser
Return: void
pre: needs array to read file
pos: Creates a new user
************************************************
*/
void CreateUser(userInfo user[]);
/*
***********************************************
Name: printPicture
Return: void
pre: needs arrays to read user infromation
pos: lets user login
************************************************
*/
void existingLogin(userInfo user[],userInfo attempt[]);
/*
****************************************************
Name: ResetPassword
Return: void
pre: needs userinfo arrays to read user infromation
pos:lets user reset password
***************************************************
*/
void ResetPassword(userInfo user[],userInfo attempt[]);


#endif // USERINFO_H
