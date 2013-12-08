/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/
#include "Picture.h"
#include <iostream>
#include "plotter.h"
#include "picture.h"
using namespace std;


//Picture that prints rocket
void printPicture(char ch)
{
    Plotter screen;
    int x=200;
    int y=200;

    if(ch=='@')
      {
          screen.setColor(darkgreen);
          screen.plot(x,y,SQUARE);
          x++;
          y++;
      }
      else if(ch=='0')
      {
          screen.setColor(darkgreen);
          screen.plot(x,y,SQUARE);
          x++;
          y++;

      }
       else if(ch=='8')
      {
          screen.setColor(green);
          screen.plot(x,y,SQUARE);
          x++;
          y++;

      }
       else if(ch=='b')
      {
          screen.setColor(blue);
          screen.plot(x,y,SQUARE);
          x++;
          y++;

      }
       else if(ch=='C')
      {
          screen.setColor(yellow);
          screen.plot(x,y,SQUARE);
          x++;
          y++;

      }
       else if(ch=='G')
      {
          screen.setColor(darkyellow);
          screen.plot(x,y,SQUARE);
          x++;
          y++;

      }
      else if(ch=='O')
      {
          screen.setColor(black);
          screen.plot(x,y,SQUARE);
          x++;
          y++;
      }


      else if(ch=='#')
      {
          screen.setColor(red);
          screen.plot(x,y,SQUARE);
          x++;
          y++;
      }
      else if (ch==';')
      {
          screen.setColor(red);
          screen.plot(x,y,SQUARE);
          x++;
          y++;
      }

      else if(ch==',')
      {
          screen.setColor(white);
          screen.plot(x,y,SQUARE);
          x++;
          y++;
      }

      else if(ch=='+')
      {
        screen.setColor(grey);
         screen.plot(x,y,SQUARE);
         x++;
          y++;
      }
      else if(ch=='`')
      {
         screen.setColor(grey);
         screen.plot(x,y,SQUARE);
         x++;
         y++;
      }
      else if (ch=='.')
      {
         screen.setColor(lightgrey);
         screen.plot(x,y,SQUARE);
         x++;
         y++;
      }
       else if (ch=='B')
      {
         screen.setColor(cyan);
         screen.plot(x,y,SQUARE);
         x++;
         y++;
      }
      else if (ch=='W')
      {
         screen.setColor(white);
         screen.plot(x,y,SQUARE);
         x++;
         y++;
      }
      else if (ch=='w')
      {
         screen.setColor(white);
         screen.plot(x,y,SQUARE);
         x++;
         y++;
      }
       else if(ch=='*')
      {
          cout<<endl;
          x++;
          y++;
      }
      else if (ch==' ')
      {
          screen.setColor(black);
          screen.plot(x,y,SQUARE);
          x++;
          y++;
      }
}

//Function that prints names
bool backgroundIntro()
{
    ifstream data;
    POINT p;
    Plotter screen;
/*    HWND consoleWnd = GetConsoleWindow();*/

    Sleep(100);
    //PlaySound("C:\Users\Abril Resendiz\SkyDrive\Documents\ProjectFinal\ProjectFinal\357mag.wav", NULL, SND_ASYNC);
    screen.setColor(yellow);
    screen.move(30,23);
    cout<<"Created By:";
    Sleep(2000);


    Sleep(100);
    //PlaySound("C:\Users\Abril Resendiz\SkyDrive\Documents\ProjectFinal\ProjectFinal\357mag.wav", NULL, SND_ASYNC);
    screen.setColor(green);
    screen.move(30,25);
    cout<<"Abril Resendiz";
    Sleep(2000);


    // PlaySound("C:\Users\Abril Resendiz\SkyDrive\Documents\ProjectFinal\ProjectFinal\357mag.wav", NULL, SND_ASYNC);
    screen.setColor(yellow);
    screen.move(30,27);
    cout<<"Daniel Holt";
    Sleep(2000);


  //  PlaySound("C:\\Users\\Alex\\Desktop\\CB\\ProjectFinal\\357mag.wav", NULL, SND_ASYNC);
    screen.setColor(green);
    screen.move(30,29);
    cout<<"Maggie Schmeltekopf";
    Sleep(2000);



    //  PlaySound("C:\\Users\\Alex\\Desktop\\CB\\ProjectFinal\\357mag.wav", NULL, SND_ASYNC);
    screen.setColor(yellow);
    screen.move(30,31);
    cout<<"Victoria Robinson";
    Sleep(2000);


    // PlaySound("C:\Users\Abril Resendiz\SkyDrive\Documents\ProjectFinal\ProjectFinal\\357mag.wav", NULL, SND_ASYNC);
    screen.setColor(green);
    screen.move(30,33);
    cout<<"Emily Peirce";
    Sleep(2000);
    screen.clear();

    return exit;

}
