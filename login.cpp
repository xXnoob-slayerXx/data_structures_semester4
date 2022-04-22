#include <fstream>
#include <vector>
#include <string>
#include "login.h"
#include "User.h"
#include "message.h"
using namespace std;
login::login(/* args */)
{
    while (true)
    {
        int options;
        cout << "click 1 for register, 2 to login, 3 to display users, and 4 to delete database :" << endl;

        cin >> options;
        if (options == 1)
        {
            User user;
            int id;
            cout << "enter username : " << endl;
            std::cin >> std::ws;
            string tempusername;
            getline(cin, tempusername);
            // user.setusername(tempusername);
            cout << "enter password : " << endl;
            string temppassword;
            getline(cin, temppassword);
            // user.setpassword(temppassword);
            cout << "enter your id numbe : " << endl;
            int tempid;
            cin >> tempid;

            // user.setid(tempid);
            user = User(tempusername, temppassword, tempid);
            reg(user, BIN_FILE_PATH);
            cout << "--------------------------------------------" << endl;
        }
        else if (options == 2)
        {

            log_in();
            cout << "-----------------------------------------------" << endl;
        }
        else if (options == 3)
        {
            vector<User *> filelines = returndata(BIN_FILE_PATH);
            for (auto line = filelines.begin(); line != filelines.end(); line++)
            {
                User *users = *line;
                cout << "password is: ";
                cout << users->getpassword() << "\n";
                cout << "username is: ";
                cout << users->getusername() << "\n";
                ;
                cout << "id is: ";
                cout << users->getid() << "\n";
                cout << "------------" << endl;
            }
        }
        else if (options == 4)
        {
            /* code */
            cout << "deleting database!\n";
            remove("data/datafile.bin");
        }
    }
}

void ::login::log_in()
{
    string name;
    string pass;
    int id_user;
    bool found = false;
    cout << "enter your username : " << endl;
    cin >> name;
    cout << "enter your password : " << endl;
    cin >> pass;
    cout << "enter your id : " << endl;
    cin >> id_user;

    vector<User *> data = returndata(BIN_FILE_PATH);
    for (auto line = data.begin(); line != data.end(); line++)
    {
        User *users = *line;
        string l;
        string k;

        int i = users->getusername().compare(name);
        int j = users->getpassword().compare(pass);

        if (i == 0 && j == 0 && users->getid() == id_user)
        {
            found = true;
            // usernamenow = users->username;
            // idnow = users->id;
            break;
        }
    }
    if (found == true)
    {
        cout << "**successfully logined*" << endl;

        choose();
    }
    else
    {
        cout << " sorry wrong data please try again " << endl;
        login();
    }
}
void login::reg(User user, string binfilepath)
{
    try
    {

        bool found = false;

        vector<User*> data = returndata(BIN_FILE_PATH);
        for (auto line = data.begin(); line != data.end(); line++)
        {
            User *users = *line;
            string l;
            string k;

            int i = users->getusername().compare(user.getusername());
            int j = users->getpassword().compare(user.getpassword());

            if (i == 0 && j == 0 && users->getid() == user.getid())
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            cout << "** you are  have account**" << endl;
        }
        else
        {
            ofstream mydata;
            mydata.open(binfilepath, ios::out | ios::app | ios::binary);
            // mydata.write((char*)&user, sizeof(user));
            mydata.write(reinterpret_cast<char *>(&user), sizeof(User));
            mydata.close();
            cout << "user added" << endl;
        }
    }

    catch (exception &e)
    {
        cout << "their is an stander exception" << e.what() << endl;
    }
}

vector<User *> login::returndata(string binfilepath)
{
    vector<User *> usersdata;
    string lines;
    try
    {
        ifstream mydata(binfilepath, ios::in | ios::binary | ios::ate);
        if (mydata.is_open())
        {
            streampos size = mydata.tellg();
            char *memblock = new char[size];
            mydata.seekg(0, ios::beg);
            mydata.read(memblock, size);
            mydata.close();
            long long byteindex = 0;
            while (byteindex < size)
            {
                User *us = (User *)(memblock + byteindex);
                usersdata.push_back(us);
                byteindex += sizeof(User);
            }
        }
    }
    catch (exception &e)
    {
        cout << "their is an standerd  " << e.what() << endl;
    }
    return usersdata;
}

void login::choose()
{
    cout << "\n\n\n\t\t\t\t modified app \n\n\n";
    cout << "\t\tpress 1 for Add a user in your contacts.\n ";

    cout << "\t\tpress 2 for send a message to a contact.\n ";
    cout << "\t\tpress 3 forundo the last sent message.\n ";
    cout << "\t\tpress 4 forsearch about contact in my contacts(report NOT FOUND if he doesn’t exist).\n ";
    cout << "\t\tpress 5 forview all contacts of specific user.\n ";
    cout << "\t\tpress 6 for view all the sent messages from latest to oldest.\n ";
    cout << "\t\tpress 7 forview all the received messages from specific contact.\n ";
    cout << "\t\tpress 8 for put a message in favorites.\n ";
    cout << "\t\tpress 9 for remove the oldest message from favorites.\n ";
    cout << "\t\tpress 10 for view all favorites messages\n ";
    cout << "\t\tpress 11 for exit\n ";
    int c;
    cin >> c;
    string s;
    switch (c)
    {
    case 1:

        cout << "enter user name of conect";
        cin >> s;
        // addtomycontect(s);
        break;
    case 2:
        cout << " send a message to a contact";
        choose();
        break;
    case 3:
        cout << "Add a user in your contacts";
        choose();
        break;
    case 4:
        cout << "Add a user in your contacts";
        choose();
        break;
    case 5:
        cout << "Add a user in your contacts";
        choose();
        break;
    case 6:
        cout << "Add a user in your contacts";
        choose();
        break;
    case 7:
        cout << "Add a user in your contacts";
        choose();
        break;
    case 8:
        cout << "Add a user in your contacts";
        choose();
        break;
    case 9:
        cout << "Add a user in your contacts";
        choose();
        break;
    case 10:
        cout << "Add a user in your contacts";
        choose();
        break;
    default:
        cout << "EXIT";
        exit;
    }
}
