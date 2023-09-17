//constructors************
#include<iostream>

using namespace std;

class complex 
{
    int a;
    public:
    //creating a constructor
    //constructor is a special member function with the same name as of the class
    //it is used to initialize the objects of its class
    //it is automatically invoked(called)whenever an object is created

    complex (void); //constructor declaration
    
    void printnumber()
    {
        cout<<"your number is "<<a<<endl;
    }
};
complex::complex (void) //these are default constructors as it doesnt take arguments
    {
     //int value;
        a= 20;
        cout<<"hello world"<<endl;
    }
int main(){
    complex c1;
    c1.printnumber(); //directly prints value of 'a' which was initializ inside constructor 
    return 0 ;         //              in 25 line.
    
}