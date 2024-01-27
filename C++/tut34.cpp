// SINGLE INHERITANCE using PUBLIC visibility mode
#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void getinput(int i, int j)
    {
        data1 = i;
        data2 = j;
    }
    int getdata1() { return data1; }
    int getdata2() { return data2; }
};
class derived : public base
{
    int data3;
    public:
        void process()
        {
            data3 = data2 *getdata1();
        }
        void display()
        {
            cout<<"the value of data1 is: "<<getdata1()<<endl;
            cout<<"the value of data2 is: "<<data2<<endl;
            cout<<"the value of data3 is: "<<data3<<endl;

        }
};
int main()
{
    derived dr;
    dr.getinput(10,30);
    dr.process();
    dr.display();

    return 0;
}