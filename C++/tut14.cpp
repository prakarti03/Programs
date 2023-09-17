//*******static variables and methods*********

#include <iostream>

using namespace std;

class employee//class name -->employee
{
    int id;
    static int salary;
    static int count; // by default initializes by 0
public:
    void setdata()
    { // salary=2000;
        cout << "enter the employee id" << endl;
        cin >> id;
        count++;
        salary++;
    }
    void getdata()
    {
        cout << "the id of the employee " << count << " is " << id << endl;
    }
    static int insalary() //static function can be direcly accessed in main function
    {
        cout << "the salary of employee " << count << " is" << salary << endl;
    }
};

int employee::count; // static variavles needs to be redeclared outside the class
int employee::salary = 2000;
int main()
{
    employee harry[2]/*object array*/, rohan, shivam; //employee class objects// in classes for each object 'count' will start from 0 if we do not use static
   
   //*******************creating an array of objects****** 
    for(int i=0;i<2;i++)
    {
    harry[i].setdata(); 
    harry[i].getdata();
    employee::insalary();//directly accessed using class name
    }
    rohan.setdata();
    rohan.getdata();
    employee::insalary();

    shivam.setdata();
    shivam.getdata();
    employee::insalary();
    return 0;
}