#include <iostream>
using namespace std;

class eveodd
{
    int a;
public:
    void setdata()
    {
        cout << "Enter any number:" << endl;
        cin >> a;
        display();
    }
    void display();
};
void eveodd::display()
{
    if (a % 2 == 0)
        cout << "NUMBER IS EVEN." << endl;
    else
        cout << "NUMBER IS ODD." << endl;
}
int main()
{
    eveodd eo;
    eo.setdata();
    return 0;
}