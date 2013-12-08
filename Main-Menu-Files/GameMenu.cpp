/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/

#include "GameMenu.h"
//Default Constructo
GameMenu::GameMenu()
{

}
// Settings menu
void GameMenu::settings()
{
    ifstream dataFile;
    string choice, m;
    Plotter screen;
    userInfo user [100];
    userInfo attempt [100];
    dataFile.open("menu.txt");
    //Prints picture
     while(dataFile)
    {
        getline(dataFile,m);
        cout<<m<<endl;

    }
    cout<<"Enter 1 to change password or 2 to return to menu"<<endl;
    cin >> choice;
    //Reset password
    if(choice=="1")
    {
        ResetPassword(user,attempt);
    }
    else
    {
        screen.clear();
        //back to main menu
        gameMenu();
    }
}

//Game play function. lets user enter game

void GameMenu::gamePlay()
{
    // This function will
    //call the game state
    ifstream dataFile;
    string m;
    Plotter screen;
    string choice;
    dataFile.open("levels.txt");
    while(dataFile)
    {
        screen.setColor(yellow);
        getline(dataFile,m);
        cout<<m<<endl;
        screen.setColor(green);
    }

    //GET LEVEL SELCTION:
    
    //CALL FUNCTION TO ENTER GAME

    screen.clear();
    Sleep(500);

}
//Function to play sounds

void GameMenu::PlaySounds()
{
    //ENTER YOUR FUNCTION TO PLAY
    //SOUNDS
}

//Function to exit game
void GameMenu::exitGame()
{
    ifstream dataFile;
    string m;
    Plotter screen;
    string choice;
    dataFile.open("gameExit.txt");
    while(dataFile)
    {
        screen.setColor(yellow);
        getline(dataFile,m);
        cout<<m<<endl;
        screen.setColor(green);
    }
     Sleep(600);
     exit(1);
}
//menu of game menu
void GameMenu::gameMenu()
{
    ifstream dataFile;
    string m;
    Plotter screen;
    string choice;
    dataFile.open("gameMenupic.txt");
    while(dataFile)
    {
        screen.setColor(yellow);
        getline(dataFile,m);
        cout<<m<<endl;
        screen.setColor(green);
    }
    cout<<"Enter 1, 2, 3 or 4 to make your selection"<<endl;
    cin >> choice;

    do
    {
        //Call settings function
        if(choice=="1")
        {
            screen.clear();
            settings();
        }
        //Call game function
        else if(choice=="2")
        {   screen.clear();
            gamePlay();
        }
        //call sounds function
        else if (choice=="3")
        {   screen.clear();
            PlaySounds();
        }
        //exit game call function
        else if (choice=="4")
        {   screen.clear();
            exitGame();
        }

    }while(!(choice=="1"||choice=="2"||choice=="3"));
}
