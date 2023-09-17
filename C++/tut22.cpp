//constructor with default arguments
#include<iostream>
using namespace std;

class complex
{
  int a,b;
  public:
  complex(int data1,int data2)
  {
      a= data1;
      b= data2;
  }
  complex(int data1)
  {
       a=data1;
       b=6;
  }
  void printnumber()
    {
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
   
};
int main(){
    complex c1(8,6);
   c1.printnumber();

    complex c2(4);
     c2.printnumber();
    return 0 ;
}