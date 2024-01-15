#include<iostream>
using namespace std;

class A
{
   public:
    virtual void display()//virtual allows the fn to be performed at run time and run the function of class B
    {
        cout<<"JAI MAHAKAL\n";
    }
};
class B: public A
{
   public:
     void display()
     {
        cout<<"JAI SHREE RAM\n";
     }
};
int main()
{  A *ptr;
   B obj;
   obj.display();//this will access display fn of class B

   obj.A::display();//this is in the scope of class A

   ptr = &obj;
   ptr->display();//this is in the scope of class A
   return 0; 
}


