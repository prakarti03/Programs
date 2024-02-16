// this Pointer
#include<iostream>
using namespace std;

class test
{
    int a;
    public:
    //void getdata(int a)
    test & getdata(int a)
    {
        this->a = a;
        return *this;
    }
    void printdata()
    {
        cout<<"The value of a is: "<<a<<endl;
    }
};
int main(){
    //this is a keyword which is a pointer which points to the object which invokes the member function
    test t1;
    t1.getdata(4).printdata();
    t1.printdata();

    return 0 ;
}