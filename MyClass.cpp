#include "MyClass.h"

MyClass::MyClass(){}

MyClass::MyClass(int m, string s)
{
    num = m;
    room = s;
} 

MyClass::MyClass(int k)
{
    num = k;
    
} 

MyClass::MyClass(string i)
{
    room = i;
} 

MyClass::~MyClass(){} 

void MyClass::setNum(int n)
{
     num = n;
}

int MyClass::getNum()
{
     return num;
}

void MyClass::setRoom(string r)
{
     room = r;
}

string MyClass::getRoom()
{
     return room;
}


void MyClass::setFun(bool f)
{
     fun = f;
}

bool MyClass::getFun()
{
     return fun;
}
