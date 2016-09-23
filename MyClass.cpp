#include "MyClass.h"

myClass::myClass()
{
    int num = 0;
    string room;
    bool fun; 
}

void myClass::setNum(int n)
{
     num = n;
}

int myClass::getNum()
{
     return num;
}

void myClass::setRoom(string r)
{
     room = r;
}

string myClass::getRoom()
{
     return room;
}


void myClass::setFun(bool f)
{
     fun = f;
}

bool myClass::getFun()
{
     return fun;
}
