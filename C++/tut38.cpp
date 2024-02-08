// MULTIPLE INHERITANCE
#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void getbase1(int i)
    {
        base1int = i;
    }
};
class base2
{
protected:
    int base2int;

public:
    void getbase2(int j)
    {
        base2int = j;
    }
};
/*
THE INHERITED DERIVED CLASS WILL LOOK SOMETHING LIKE THIS:
DATA MEMBERS:
    base1int ----> protected
    base2int ----> protected
MEMBER FUNCTIONS
    getbase1()---->public
    getbase2()---->public
    show()   ----->public
*/
class derived : public base1,public base2 // multiple inheritance
{
public:
    void show()
    {
        cout << "The value of base1 is: " << base1int << endl;
        cout << "The value of base2 is: " << base2int << endl;
        cout << "The sum of these values is: " << base1int + base2int << endl;
    }
};
int main()
{
    derived d;
    d.getbase1(56);
    d.getbase2(90);
    d.show();
    return 0;
}