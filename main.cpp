#define BIN_FILE_PATH "data/datafile.bin"
#include <iostream>
#include "User.h"
#include "User.cpp"
#include "message.h"
#include "message.cpp"
#include "login.h"
#include "login.cpp"
#include <iterator>
#include "list"
#include <list>
using namespace std;

struct student
{
    /* data */
    char name[50];
    int age;
    float gpa;
};

int main()
{

   login freshstart = login();


// student stu = {"hank" , 48 , 3.5};
// fstream f;
// f.open("records.dat",ios::out | ios::binary);
// if (f.is_open())
// {
//     /* code */
//     f.write(reinterpret_cast<char*>(&stu), sizeof(student));
//     f.close();
// }
// else
// {
    
//     cout<<"error openning file!";
// }























    // User u1 = User("medo", "medo123",001);
    // cout<<u1.getid();

 

    // User u2 =User("medo2" , "medo1234");
    // User u3 =User("medo3" , "medo1235");
    // User u4 =User("medo4" , "medo1236");
    // list<User> allusers;
    // allusers.push_back(u1);
    // allusers.push_back(u2);
    // allusers.push_back(u3);
    // allusers.push_back(u4);
    // print(allusers);
}