#include "User.h"
#include <stdlib.h>

User::User(string name, string pass, int identification)
{
    username = name;
    password = pass;
    id = identification;
    // id = rand()%51;
}
User::User()
{
    username = "";
    password = "";
}
string User::getusername()
{
    return username;
}
string User::getpassword()
{
    return password;
}
int User::getid()
{
    return id;
}
void getrecievedmessages(list<message> const &recievedmessages)
{
    for (message i : recievedmessages)
    {
        cout << i.getsenderid() << "said : " << i.getmessage()<< std::endl;
    }

}
//
// void print(list<User> const &list)
// {
//     for (User i : list)
//     {
//         cout << i.getusername() << std::endl;
//     }
// }
//
// void User::setusername(string u)
// {
//     this->username = u;
// }
// void User::setpassword(string pass)
// {
//     this->password = pass;
// }
// void User::setid(int i)
// {
//     this->id = i;
// }
void User::addFriend(int id){
    
}
void User::sendaMessage(int recipeintId , string messagecontent)
{

}