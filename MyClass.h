#ifndef MYCLASS_H
#define MYCLASS_H
 
#include <iostream>
#include <string>


using namespace std;

class MyClass //header
{
  private:
            int num = 9;
            string room = "HI";
            bool fun = true;

   public: 
            MyClass();
            MyClass(int w, string s);
            MyClass(int f);
            MyClass(string t);
            void setNum(int n);
            int getNum();
            void setRoom(string r);
            string getRoom();
            void setFun(bool f);
            bool getFun();
      
};

#endif

