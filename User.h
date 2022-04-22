#pragma once
#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include "message.h"
using namespace std;

class User
{
private:


    string username;
    string password;
    int id;
    list<message> recievedmessages;
    list<User> friends;



    // 	stack<string>sentmessages;
    // stack<string>recivedmessages;
    // queue<string>myfavouritmessages;
    // list<contact>mycontact;

public:
    User();
    User(string name, string pass, int identification);

    string getusername();
    string getpassword();
    int getid();
    void getrecievedmessages();
    void setusername(string u);
    void setpassword(string p);
    void setid(int i);

    void addFriend(int id);
    void sendaMessage(int reciepientId, string messagecontent);
    
};
