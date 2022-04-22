#include "message.h"
#include <stdlib.h>

void message::setmessage(string content, int id)
{
    this->messagecontent = content;
    this->senderid = id;
}
string message::getmessage()
{
    return this->messagecontent;
}
int message::getsenderid()
{
    return this->senderid;
}

message::message()
{
}
