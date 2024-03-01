#include<iostream>

using namespace std;

class time
{
   int hours;
   int minutes;
   public:
      time(int t)
      {
        hours =  t/60;
        minutes = t%60; 
      }
      void display()
      {
        cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
      }
};
int main(){
    time t1(85);//typr conversion of int 85 to ti object
    t1.display();
    t1 = 68;
    t1.display();
    return 0 ;
}