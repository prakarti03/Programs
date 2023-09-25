#include <iostream>

using namespace std;

class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    friend complex operator+(complex, complex); // operator overload.. using friend f'n

    /* complex operator+(complex c2) // using current object and operator overloading
     {
         complex c1;
         c1.real = real + c2.real;
         c1.img = img + c2.img;
         return c1;
     }*/
    /*complex sum(complex c2)   //using current object
    {   complex c1;
        c1.real = real + c2 .real;
        c1.img = img + c2 .img;
        return c1;
    } */
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
complex operator+(complex c3, complex c2) // operator overload.. using friend f'n
{
    complex c1;
    c1.real = c3.real + c2.real;
    c1.img = c3.img + c2.img;
    return c1;
}
int main()
{
    complex c6, c4(9, 7), c5(7, 8);
    c4.display();
    c5.display();
    cout << "Sum is: " << endl;

    // c3 = c4.sum(c5);    using current object and simple function

    // c3 = c4 + c5;    // -->c3 = c4.operator+(c5)  means operator overloading
    c6 = c4 + c5; // -->c6 = operator+(c4,c5)  means operator overloading using frnd f'n
    c6.display();

    return 0;
}