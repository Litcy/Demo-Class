#include "MyClass.h"

myClass::myClass(){}

myClass::myClass(int m, string s)
{
    num = m;
    room = s;
} 

myClass::myClass(int l, string i)
{
    num = m;
    room = s;
} 

myClass::myClass(int k,)
{
    num = k;
    
} 

myClass::myClass(string i)
{
    room = i;
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
