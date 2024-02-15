//POINTERS TO OBJECTS AND ARROW OPERATOR
#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;
    public:
    void setdata(int r, int i)
    {
        real = r;
        img = i;
    }
    void printdata()
    {
       cout<<"Complex no. is: \n"<<real<<" + i"<<img<<endl;      
    }
};
int main(){
    Complex* ptr = new Complex;
    (*ptr).setdata(4,5);
    (*ptr).printdata();
    //OR 
    cout<<"USING ARROW OPERATOR:\n";
    ptr->setdata(6,7);
    ptr->printdata();

    //ARRAY OF POINTERS TO OBJECTS
    Complex* ptr1 = new Complex[3];
    ptr1->setdata(6,7);// ptr[0] pointer Object 1 
    ptr1->printdata();

    ptr1 = ptr1 + 1;   
    ptr1 ->setdata(6,7);// ptr[1] pointer Object 2
    ptr1 ->printdata();

    ptr1 = ptr1 + 1;
    ptr1 ->setdata(6,7);// ptr[2] pointer Object 3
    ptr1 ->printdata();

    return 0 ;
}