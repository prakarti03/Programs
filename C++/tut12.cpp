// oops -->classes and objects
// c++  --> initially called as c with classes -->by stroustroup
// class --> extension of structure (in c)
// structures had limitations
//         -->members are public
//         -->no methods
// classes -->structures +more
//    -->it can have mehods and properties
//    -->can make few as private and public
// structures are already typedefed in c++
// you can declare objects along with the class declaration like this
//            class employee{
//                           //statements
//            }harry,animal;
// harry.salary-->makes no sense if salary is private

//*******nesting of member functions***********************************

#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    // private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};
void binary::read(void)
{
    cout << "enter the binary number:" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "incorrect binay format" << endl;
            exit(0);
        }
    }
}
void binary::ones_complement(void)
{
    chk_bin();    //**************this is called nesting of members
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            s.at(i) = '0';
        else
            s.at(i) = '1';
    }
}
void binary::display(void)
{
    cout << "displaying your binary number:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin(); //function called in anothes function definition in "ones_complement"above
    b.ones_complement();
    b.display();
    return 0;
}