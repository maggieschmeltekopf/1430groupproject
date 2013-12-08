/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/

#include "Menu.h"
#include "Plotter.h"
#include "userInfo.h"
//Default constructor
Menu::Menu ()
{

}

//Function to login
void Menu::Login ()
{
    ifstream dataFile;
    string m, choice;
    Plotter screen;
    userInfo user[100];
    userInfo attempt[100];
    dataFile.open("menu.txt");
    //Calling background text
     while(dataFile)
    {
        screen.setColor(yellow);
        getline(dataFile,m);
        cout<<m<<endl;
        screen.setColor(green);

    }
    cout <<" Are you a new or an existing user? "
          <<" Enter 'N' for new or 'E' for existing :"<<endl;

    //Ask until valid answer is given
    do
    {
        cin >> choice;
        cin.clear();

        if(choice=="N"|| choice=="n")
        {
            CreateUser(user);
        }

       else if (choice=="E"|| choice=="e")
        {
            existingLogin(user, attempt);
        }
        else
        {
          cout <<" Are you a new or an existing user? "
                <<" Enter 'N' for new or 'E' for existing :"<<endl;
        }

    }while(!(choice=="N"|| choice=="n"||choice=="E"|| choice=="e"));
}

//This function contains itroduction display

void Menu::intro()
{
    ifstream inFile,dataFile;
    string n;
    char character;
    Plotter screen;
    dataFile.open("Intro Title.txt");
    inFile.open("lunar.txt");


    //Test Files
    if(!inFile)
    {
        cout<<"Error"<<endl;
    }


   //Read File and print backgrounds picture
    while(dataFile)
    {
        getline(dataFile,n);
        cout<<n<<endl;

    }
    //Call print function to print picture
   while(inFile.get(character))
    {
        printPicture(character);
    }

   // call background introduction Function
   backgroundIntro();
}

