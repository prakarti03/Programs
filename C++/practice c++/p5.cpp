//overloaded constructors
#include <iostream>

using namespace std;
class complex
{
    int x, y;
    

public:
    complex() {}
    complex(int a) { x = y = a; }
    complex(int real, int img)
    {
        x = real;
        y = img;
    }
    friend complex sum(complex, complex);
    friend complex show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
complex show(complex c4)
{
    cout << c4.x << " + " << c4.y << "i" << endl;
    return 0;
}
int main()
{
    complex c;
    complex a(2, 3);
    show(a);
    complex b(6);
    show(b);

    c = sum(a, b);
    show(c);

    return 0;
}