#ifndef MYCLASS_H
#define MYCLASS_H
 
#include <iostream>
#include <string>


using namespace std;

class myClass //header
{
  private:
            int num = 9;
            string room = "HI";
            bool fun = true;

   public: 
            myClass();
            myClass(int w, string s);
            myClass(int f);
            myClass(string t);
            void setNum(int n);
            int getNum();
            void setRoom(string r);
            string getRoom();
            void setFun(bool f);
            bool getFun();
      
};

#endif

