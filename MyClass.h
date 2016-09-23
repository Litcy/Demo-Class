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
            void setNum(int n);
            int getNum();
            void setRoom(int r);
            string getRoom();
            void setFun(int f);
            bool getFun();
      
};

#endif

