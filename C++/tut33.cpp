//Inheritance and its types
#include<iostream>
using namespace std;

//Base class
class employee{
    public:
    int id; 
    
      float salary;
      employee(int i){
        id = i;
        salary = 3500.4;
      }
      employee(){}
};

//derived class syntax
/*
class {derived class name}:{{visibility mode}} {{base class name}}
{
    //class members...
};
NOTE: 
1.default visibility mode is private
2.public visibility mode: public members of the base class becomes public members of the derived class
3.private visibility mode: public members of the base class becomes private members of the derived class
4.private members are never inherited
*/
class programmer:employee
{
   public:
    int languagecode;
    programmer(int inpid){
        id = inpid;
        int languagecode = 9;
    }
    
    void getdata()
    {
        cout<<id<<endl;
    }
};
int main(){
       employee harry(1),rohan(2);
       cout<<harry.salary<<endl;
       cout<<rohan.salary<<endl;
       programmer skills(10);
       cout<<skills.languagecode<<endl;
       skills.getdata();
    return 0 ;
}