#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "Plotter.h"
#include "userInfo.h"

using namespace std;

int main()
{
    ifstream dataFile, dataFile2;
    ifstream inFile2;
    string n, m;
    Plotter screen;
    char choice;
    string choice1; //choose if new or existing user
    string usernameA, passwordA;//attempts
    userInfo user[100];
    userInfo attempt[100];
    userInfo attempt2 [100];
    dataFile.open("Intro Title.txt");
    dataFile2.open("menu.txt");

    inFile2.open("userData.txt");

    //Open picture file and print picture
    if(!inFile2)
    {
        cout<<"Error"<<endl;
        return(1);
    }

    while(dataFile)
    {
        getline(dataFile,n);
        cout<<n<<endl;

    }

    menu();

    while(dataFile2)
    {
        getline(dataFile2,m);
        cout<<m<<endl;

    }


    cout<<"WELCOME TO LUNAR LANDER"<<endl;

    cout <<" Are you a new or an existing user? "
         <<" Enter 'N' for new or 'E' for existing :"<<endl;

    cin.get(choice);

    cin.clear();

    if(choice=='N'|| choice=='n')
    {
        CreateUser(user);
    }


    else if (choice=='E'|| choice=='e')
    {
        Login(user, attempt);
       /* cout<<"Would you like to change your password?"
        <<" Enter 'Y' for yes or 'N' for no:"<<endl;
        cin >> choice1;
        if(choice1=="Y"|| choice1=="y")
        {
            ResetPassword(user, attempt2);
        }
       

    }


    return 0;
}
