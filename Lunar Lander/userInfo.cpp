UserInfo.cpp

void Login(userInfo user[], userInfo attempt[])
{
   ifstream inFile;
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

    //do{
        cout <<"Log in Now: "<<endl;
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
                cout<<"You are now logged in"<<endl;
                cout<<endl;
               // success=true;
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

                  }
                  else
                  {
                      cout<<"Sorry, yout Input was invalid."<<endl;
                      Sleep(1000);
                      exit(1);
                  }

                }
           }
      }
   // } while(!success);
}


void CreateUser(userInfo user[])
{
    ifstream inFile2;
    inFile2.open("userData.txt");
    ofstream outputStream ("userData.txt", ios::app);
    Plotter screen;

    if(!inFile2)
    {
        cout<<"error"<<endl;
    }
    string userN,passcode, hint;
    int count = 0;



    while(inFile2>>userN>>passcode>>hint)
    {
        count++;
    }
    cout <<"Create a username: " << endl;
    //Save information in next space available
    cin>>userN;
    user[count+1].username=userN;
    //print information to the file
    outputStream << user[count+1].username<<" ";

    cout <<"Enter Password: "<<endl;
    cin>> passcode;
    user[count+1].password=passcode;
    outputStream  << user[count+1].password<< " ";


    cout <<"Create a One Word Password Hint: ";
    cin>> hint;
    user[count+1].passwordHint=hint;
    outputStream << user[count+1].passwordHint<< " "<<endl;

    cout <<endl<<endl;

    cout <<"Success: Welcome to Lunar Lander"<<endl;
    Sleep(2000);
    screen.clear();
    cout <<endl;
}

void ResetPassword(userInfo user[],userInfo attempt[])
{
   ifstream inFile;
   int count1 = 0;
   int count2 = 0;
   string usernameA,passcodeA;
   string userN, passcode, hint;
   string newPassword, newPassword1;
   char select;
   inFile.open("userData.txt");
   ofstream outputStream ("userData.txt", ios::app);
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

            if(newPassword==newPassword1)
            {
                user[i].password=newPassword;
                outputStream<<user[i].username<<" ";
                outputStream<<user[i].password<<" ";
                outputStream<<user[i].passwordHint<<" ";
                cout<<"Your password has been changed"<<endl;
            }
           else
           {
               cout<<"Sorry your passwords do not match"<<endl;
           }

        }
   }

}
