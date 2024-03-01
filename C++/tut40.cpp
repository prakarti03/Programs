// VIRTUAL BASE CLASS
#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    void getmarks(int a)
    {
        rollno = a;
    }
    void printdata()
    {
        cout << "Your roll number is:" << rollno << endl;
    }
};

class Test : public Student
{
protected:
    float maths, loc;

public:
    void getdata(float m, float l)
    {
        maths = m;
        loc = l;
    }
    void print_marks()
    {
        cout << "Your maths marks is: " << maths << endl
             << "Your loc marks is: " << loc << endl;
    }
};

class Sports 
{
protected:
    int score;

public:
    void getruns(int r)
    {
        score = r;
    }
    void print_runs()
    {
        cout << "Football runs is: " << score << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    int total;
public:
    void display()
    {
        total = maths+loc;
        printdata();
        print_marks();
        print_runs();
        cout << "Total marks is: " << total << endl;
    }
};
int main()
{
    Result res;
    res.getmarks(56);
    res.getdata(90.9,67.6);
    res.getruns(6);
    res.display();

    return 0;
}