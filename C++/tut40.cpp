// VIRTUAL BASE CLASS
#include <iostream>
using namespace std;

class Student
{
protected:
    int eng;

public:
    void getmarks(int a)
    {
        eng = a;
    }
    void printdata()
    {
        cout << "Your english marks is:" << eng << endl;
    }
};

class Test : virtual public Student
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

class Sports : virtual public Student
{
protected:
    int football;

public:
    void getruns(int r)
    {
        football = r;
    }
    void print_runs()
    {
        cout << "Football runs is: " << football << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    int total;
public:
    void display()
    {
        total = eng+maths+loc;
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