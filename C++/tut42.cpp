//INITIALIZATION LIST IN CONSTRUCTORS
#include<iostream>
using namespace std;

class A
{
  int a;
  int b;
  public:
   
    //A(int i,int j):a(i),b(j)
    //A(int i,int j):a(i),b(a+j)
    //A(int i,int j):a(i),b(i+a)
    //A(int i,int j):b(i),a(j+b) -->RED FLAG this will create error bcz a will be initialized first according to the declaration
    A(int i,int j):a(i),b(j *2)
    {
        cout<<"Constructor Executed! "<<endl;
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
    }
};
int main(){
    A(4,6);
    return 0 ;
}