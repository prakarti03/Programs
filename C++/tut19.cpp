//parameterized and default constructors
#include<iostream>

using namespace std;

class complex
{
    int a;
    int b;
    public:
    complex(int ,int); //parameterized constructors declaration
 void printnumber()
    {
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex::complex (int x,int y) //these are parameterized constructors as it takes arguments
    {
     
        a= x;
        b=y;
    }
int main(){
    //implicit call
    complex c1(5,10);
    c1.printnumber();

    //explicit call
    complex j = complex(10,20);
    j.printnumber();
    return 0 ;
}