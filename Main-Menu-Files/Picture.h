/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/
#ifndef PICTURE_H
#define PICTURE_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "plotter.h"

/*
***********************************************
Name: printPicture
Return: void
pre: needs to read a character uses the plotter
     class to plot coordinates
pos:Plot a picture from a text file
************************************************
*/
void printPicture(char ch);

/*
***********************************************
Name: backgrounIntro
Return: void
pre: uses plotter class to plot naes to screen
pos:Plots names
************************************************
*/
bool backgroundIntro();

#endif // PICTURE_H
