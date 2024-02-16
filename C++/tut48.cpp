#include <iostream>
using namespace std;

class Base
{
public:
    int b1;
    virtual void display()
    //void display()
    {
        cout << "1 Base class variable value is: " << b1 << endl;
    }
};
class Derived : public Base
{
public:
    int d1=55;
    void display()
    {
        cout << "2 Base class variable value is: " << b1 << endl;
        cout << "2 Derived class variable value is: " << d1 << endl;
    }
};
int main()
{
    Base *b;
    Base obj1;
    Derived d;
    b = &d; // base class pointer pointing to derived class object

    b->b1 = 9;
    b->display();
   // b->d1=7; will show error as base class pointer cannot access derived class member funcns
    
    Derived *der ;
    der = &d;  // derived class pointer pointing to derived class object
    cout<<"\nDerived Class Pointer: \n";
    der->d1 = 45;
    der -> display();
   //TO SOLVE THIS ERROR WE USE VIRTUAL KEYWORD
   cout<<"\nVIRTUAL KEYWORD USED :\n";
    b->display();

    return 0;
}