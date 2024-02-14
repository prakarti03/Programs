//HIERARCHIAL INHERITANCE
#include<iostream>
#include<string.h>
using namespace std;

class student
{
   int rollno;
 public:
   void getroll(int a)
   {
     rollno = a;
   }
   void printroll()
   {
    cout<<"Roll no. is: "<<rollno <<endl;
   }

};
class engineering:public student{
    char department[10];
    public:
      void getdept(char a[])
      {
         strcpy(department, a);
      }
      void printdept()
      {
        cout<<"Department name is: "<<department<<endl;
      }
};
class computer:public engineering{
  int C,RDBMS,LOC;
  public:
     void getmarks(int a,int b,int c)
     {
        C = a;
        RDBMS = b;
        LOC = c;
     }
     void show()
     {
        cout<<"C marks is: "<<C<<endl;
        cout<<"RDBMS marks is: "<<RDBMS<<endl;
        cout<<"LOC marks is: "<<LOC<<endl;
        cout<<"TOTAL marks is: "<<C+RDBMS+LOC<<endl;
     }
};
class mechanical:public engineering{

};
int main(){
    computer c1;
    c1.getroll(5);
    c1.printroll();
    c1.getdept("Computer");
    c1.printdept();
    c1.getmarks(45,90,78);
    c1.show();
    return 0 ;
}