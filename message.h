#pragma once
#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <string>
using namespace std;

class message
{
private:
    /* data */
    string messagecontent;
    int senderid;

public:
    message(/* args */);

    void setmessage(string content, int senderidentification);
    string getmessage();
    int getsenderid();
};
