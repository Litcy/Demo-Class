#ifndef MYCLASS_H
#define MYCLASS_H
 
#include <iostream>
#include <string>


using namespace std;

class myClass //header
{
  private:
            int num;
            string room;
            bool fun;

   public:
            myClass();
            void setNum(int n);
            int getNum();
            void setRoom(string r);
            string getRoom();
            void setFun(bool f);
            bool getFun();
      
};

#endif

