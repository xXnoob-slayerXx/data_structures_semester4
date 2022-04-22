#pragma once
#define BIN_FILE_PATH "data/datafile.bin"
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "message.h"

using namespace std;

class login
{
private:
    /* data */
public:
    login(/* args */);
    void reg(User user, string binfilepath);
    void log_in();
    vector<User*> returndata(string binfilepath);
    void choose();

};


