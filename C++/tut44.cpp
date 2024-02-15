//NEW AND DELETE OPERATORS
#include<iostream>
using namespace std;

int main()
{
    //POINTERS USE
    float a =4;
    float* ptr = &a;
    cout<<"The value of a is: "<<*ptr<<endl;

    //NEW OPERATOR
    ptr = new float(3.14);
    cout<<"Current value of ptr is: "<<*ptr<<endl;

    //DYNAMIC MEMORY ALLOCATION TO A BLOCK USING ' NEW ' KEYWORD
    int *p = new int[3];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
   
    cout<<"The value of p[0] is: "<<p[0]<<endl;
    cout<<"The value of p[1] is: "<<p[1]<<endl;
    cout<<"The value of p[2] is: "<<p[2]<<endl;
   
   //******************DELETE OPERATOR
    delete [] p;//TO DEALLOCATE CONTIGUOUS BLOCK OF MEMORY OR delete p;
    delete p;

    cout<<"The value of p[0] is: "<<p[0]<<endl;
    cout<<"The value of p[1] is: "<<p[1]<<endl;
    cout<<"The value of p[2] is: "<<p[2]<<endl;
    return 0;
}