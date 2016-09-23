//complete me

#include <iostream>
#include <string>
#include "MyClass.h"
using namespace std;


int main()
{
    myClass myVar;
    string str;
    int var = 10;
    bool bo = true;

    cout << " Var= " << var << endl;
  
    myVar.setNum(var);
    myVar.setRoom("hi");
    myVar.setFun(bo);

    cout << myVar.getNum() << endl;
    cout << myVar.getRoom() << endl;
    cout << myVar.getFun() << endl;

    system("PAUSE");
    return 0;

}
