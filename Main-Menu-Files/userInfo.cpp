/*
Author: Abril Resendiz
Assignment: Group Project CSI 1430
Date Due: 12/9/2013
Date Created:11/25/2013
Last Date Modified:12/8/2013
*/
#include "userInfo.h"
GameMenu player; //global
// Function to create new user
void CreateUser(userInfo user[])
 {
    string userN,passcode, hint;
    int count = 0;
    ifstream inFile2;
    inFile2.open("userData.txt");
    ofstream outputStream ("userData.txt", ios::app);
    Plotter screen;

    if(!inFile2)
    {
        cout<<"error"<<endl;
    }

    while(inFile2>>userN>>passcode>>hint)
    {
        count++;
    }
    cout << "Create a username: " << endl;
    //Save information in next space available
    cin  >> userN;
    user[count+1].username=userN;
    //print information to the file
    outputStream << user[count+1].username<<" ";
    cout <<"Enter Password: "<<endl;
    cin  >> passcode;
    user[count+1].password=passcode;
    outputStream  << user[count+1].password<< " ";

    cout<<"Create a One Word Password Hint: ";
    cin >> hint;
    user[count+1].passwordHint=hint;
    outputStream << user[count+1].passwordHint<< " "<<endl;
    cout <<endl<<endl;

    cout <<"Success: Welcome to Baylor Moonward"<<endl;
    Sleep(2000);
    screen.clear();
    // Call gameMenu
     player.gameMenu();



}

// If existing user. Funtion to log in

void existingLogin(userInfo user[], userInfo attempt[])
{
   ifstream inFile;
   Plotter screen;
   int count1 = 0;
   int count2 = 0;
   string usernameA,passcodeA;
   string userN, passcode, hint;
   char select;
   inFile.open("userData.txt");
   if(!inFile)
    {
      cout<<"Error "<<endl;
    }
    //Read information from file and store
    //in an array
    while(inFile>>userN>>passcode>>hint)
     {
        user[count1].username=userN;
        user[count1].password=passcode;
        user[count1].passwordHint=hint;
        count1++;
     }
     //let user log in
        cout <<"Log in Now: "<<endl;
        cout<<endl;
        cout<< "Enter Username: "<<endl;
        cin >> usernameA;
        attempt[count2].username=usernameA;
        cout<< "Enter Password: "<<endl;
        cin >> passcodeA;
        attempt[count2].password=passcodeA;

    //Check if input is valid
        for(int i=0; i<count1; i++)
        {
           if(user[i].username==attempt[count2].username
            &&user[i].password==attempt[count2].password)
            {
                cout<<"You are now logged in"<<endl;
                cout<<endl;
                screen.clear();
                // Call gameMenu
                player.gameMenu();
            }

        else if(user[i].username==attempt[count2].username
        &&(!(user[i].password==attempt[count2].password)))
              {
                cout<<"Sorry you entered the wrong password"<<endl;
                cout<<"Your password hint is: "<<user[i].passwordHint<<endl;
                cout<<endl;
                cout<< "Enter Username: "<<endl;
                cin >> usernameA;
                attempt[count2].username=usernameA;
                cout<< "Enter Password: "<<endl;
                cin >> passcodeA;
                attempt[count2].password=passcodeA;

                for(int i=0; i<count1; i++)
                {
                  if(user[i].username==attempt[count2].username
                  &&user[i].password==attempt[count2].password)
                  {
                    cout<<"Success: Welcome to Lunar Lander"<<endl;
                    screen.clear();
                    // Call gameMenu
                    player.gameMenu();

                  }
                  else
                  {
                      cout<<"Sorry, yout Input was invalid."<<endl;
                      //CALL MAIN MENU
                      Sleep(1000);
                      exit(1);
                  }

                 }
            }

         else
          {
            cout<<"Sorry, yout Input was invalid."<<endl;
             //CALL MAIN MENU
            Sleep(1000);
            exit(1);
          }

      }
}

//FUNCTION TO RESET PASSWORD, this will be on the game menu settings

void ResetPassword(userInfo user[],userInfo attempt[])
{
   ifstream inFile;
   int count1 = 0;
   int count2 = 0;
   string usernameA,passcodeA;
   string userN, passcode, hint;
   string newPassword, newPassword1;
   char select;
   GameMenu a;
   Plotter Screen;
   inFile.open("userData.txt");

   ofstream temp ("temp.txt",ios::app);

   if(!inFile)
    {
      cout<<"Error "<<endl;
    }
    //Read information from file and store
    //in an array
    while(inFile>>userN>>passcode>>hint)
    {
        user[count1].username=userN;
        user[count1].password=passcode;
        user[count1].passwordHint=hint;
        count1++;
    }
    cout<< "Enter Current Username: "<<endl;
    cin >> usernameA;
    attempt[count2].username=usernameA;
    cout<< "Enter  Current Password: "<<endl;
    cin >> passcodeA;
    attempt[count2].password=passcodeA;

    for(int i=0; i<count1; i++)
    {
       if(user[i].username==attempt[count2].username
        &&user[i].password==attempt[count2].password)
        {

            cout<<"Enter your new desired password: "<<endl;
            cin  >> newPassword;
            cout << "Confirm your new Password"<<endl;
            cin  >> newPassword1;
        }
    }
        if(newPassword==newPassword1)
         { for(int j=0; j<count1; j++)
           {
             if (user[j].username!=attempt[count2].username
                &&user[j].password!=attempt[count2].password)
                {
                  temp<<user[j].username<<" ";
                  temp<<user[j].password<<" ";
                  temp<<user[j].passwordHint<<" "<<endl;;
                }
            }
          }

         else
           {
             cout<<"Sorry your passwords do not match"<<endl;
           }

                temp.close();
                inFile.close();
                remove("userData.txt");
                rename("temp.txt","userData.txt");
                ofstream outputStream("userData.txt",ios::app);

            for(int i=0; i<count1; i++)
            {
                if (user[i].username==attempt[count2].username
                &&user[i].password==attempt[count2].password)
                {
                   user[i].password=newPassword;
                   outputStream<<user[i].username<<" ";
                   outputStream<<user[i].password<<" ";
                   outputStream<<user[i].passwordHint<<" "<<endl;
                }
            }

            cout<<"Your password has been changed"<<endl;
            Sleep(600);
            Screen.clear();
            //call game menu
            a.gameMenu();


    }



