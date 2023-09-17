#include <iostream>
using namespace std;

class student
{
    int rollno;
    float math, eng, intern, per, total;

public:
    student(){};
    student(int r, float e, float m, float itr);
    student( int r,int e, int m, int itr);
    void display();
};
student::student(int r, float e, float m, float itr = 10)
{
    rollno = r;
    math = m;
    eng = e;
    intern = itr;

    total = m + e + itr;
    per = (total / 300) * 100;
}
student::student(int r, int e, int m, int itr = 10)
{
    rollno = r;
    math = m;
    eng = e;
    intern = itr;

    total = m + e + itr;
    per = (total / 300) * 100;
}
void student:: display()
{
    cout <<"total is: "<< total<<endl;
    cout << "percentage is: "<<per<<endl;
}
int main()
{
    int r, m, e, in;
    float a, n;
    cout << "enter the rollno,maths,eng marks:" << endl;
    cin >> r >> a >> n;

    student s1(r, n, a);
    s1.display();
    cout << "enter the rollno,maths,eng and internal marks:" << endl;
    cin >> r >> m >> e >> in;
    student s2(r, e, m, in);
    s2.display();
    return 0;
}