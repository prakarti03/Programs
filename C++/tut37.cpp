//MULTILEVEL INHERITANCE 
#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void setnumber();
    void getnumber();
};
void student::setnumber()
{
    int number;
    cout << "Enter rollno:"<<endl;
    cin >> number;
    rollno = number;
}
void student::getnumber()
{
    cout << "The roll number is: " << rollno << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float i, float j)
    {
        maths = i;
        physics = j;
    }
    void getmarks()
    {
        cout << "My maths marks is: " << maths << endl;
        cout << "My physics marks is: " << physics << endl;

    }
};
class result:public exam
{
        float percentage;
        public:
        void display()
        {
            getnumber();
            getmarks();
            cout<<"your percentage is: "<<(maths+physics)/2<<"%"<<endl;
        }
};
int main()
{
    /*
    NOTES:
       if we are inheriting B from A and C from B:[A---->B---->C]
       1. A is the base class for B and B is the base class for C
       2. A--->B---->C is called inheritance Path
    */
    exam e;
    e.setnumber();
    e.getnumber();
    e.setmarks(56,90);
    e.getmarks(); 
    cout<<endl<<"ERROR OUTPUT:"<<endl;
    result res;
    res.display();
    cout<<"\nCORRECT OUTPUT:"<<endl;
    res.setnumber();
    res.setmarks(90,98);
    res.display();
    
  
    return 0;
}