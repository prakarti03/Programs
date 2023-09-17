// swapping values of two classes using friends
#include <iostream>

using namespace std;
class c2;
class c1
{
    int a;

public:
    void setdata()
    {
         cout<<"a is ";    cin>>a;
    }
    void display(void)
    {
         cout<<"now a is "<<a<<endl;
    }
    friend void exchange(c1  &, c2  &);
};
class c1;
class c2
{
    int b;

public:
    void setdata()
    {

        cout<<"b is ";cin>>b;
    }
    void display(void)
    {
         cout<<"now b is "<<b<<endl;
    }
    friend void exchange(c1  &, c2  &);
};
void exchange(c1 &x, c2 &y )
{
    int temp;
    temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    c1 o1;
    o1.setdata();
    
    c2 o2;
    o2.setdata();

    exchange(o1, o2);
    o1.display();
    o2.display();
   

    return 0;
}