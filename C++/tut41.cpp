//CONSTRUCTORS IN DERIVED CLASS 
#include<iostream>
using namespace std;

/********CASE1
class A: public B,public C
{
       the order of invoking is B(),C() AND then A()
};
**************CASE2
class A: public B , virtual public C
{
        the order is C(),B() AND then A()
};
*/
class base1
{
    int data1;
    public:
      base1(int a)
      {
            data1 = a;
            cout<<"BASE1 class constructor called !"<<endl;
      }
      void printbase1()
      {
        cout<<"The value of data1 is: "<<data1<<endl;
      }
};
class base2
{
    int data2;
    public:
      base2(int a)
      {
            data2 = a;
        cout<<"BASE2 class constructor called !"<<endl;

      }
      void printbase2()
      {
        cout<<"the value of data2 is: "<<data2<<endl;
      }
};
class derived: public base2,public base1
{
    int derived1,derived2;
    public:
         derived(int i,int j, int p, int q):base1(i),base2(j)
         {
            derived1 = p;
            derived2 = q;
            cout<<"Derived class constructor called !"<<endl;
         }
         void printderived()
         {
            cout<<"the value of derived1 is: "<<derived1<<endl;
            cout<<"the value of derived2 is: "<<derived2<<endl;
         }
};
int main(){
    derived d1(1,2,3,4);
    d1.printbase1();
    d1.printbase2();
    d1.printderived();
    return 0 ;
}