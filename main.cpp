//complete me

#include <iostream>
#include <string>
using namespace std;


int main()
{
    myClass myVar;
    string str;
    int var = 10;
    bool bo = true;

    cout << " Var= " << endl;
    
    cout << "Enter a string" << endl;
    cin >> str;

    myVar.setNum(var);
    myVar.setRoom(str);
    myVar.setFun(var);

    cout << myVar.getNum() << endl;
    cout << myVar.getRoom(str) << endl;
    cout << myVar.getFun(var) << endl;

    system("PAUSE");
    return 0;

}
