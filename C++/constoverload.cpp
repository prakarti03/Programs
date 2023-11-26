//wap to add complex no. using constructor overloading
#include <iostream>
using namespace std;
class complex
{
    int a, b;
public:
    complex()
    {
        a = 0;
        b = 0;
    } // default constructor
    complex(int i)
    {
        a=b=i;
    }//one parameter construcot
    complex(int x, int y)
    {
        a = x;
        b = y;
    } // parmeterized constructor
    complex(complex &c1, complex &c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }//copy constructor
    friend void printnumber(complex c)
    {
        cout << c.a << " + " << c.b << "i" << endl;
    }
};
int main()
{
    complex p(6, 8), q(9, 1), r(p, q),s(9);
    printnumber(p);
    printnumber(q);
    printnumber(r);
    printnumber(s);

    return 0;
}