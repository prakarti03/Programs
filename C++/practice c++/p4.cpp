#include <iostream>
using namespace std;
class sum  {
            int n, j;
    public:
    void setdata()
    {
        cout << "Enter the range:" << endl;
        cin >> n >> j;
    }
    int logic()
    {
        int i, summ = 0;
        for (i = n; i <= j; i++)
        {
            summ = summ + i;
        }
        return summ;
    }
    void display()
    {
        cout << "THE SUM OF NATURAL NUMBERS FROM "<<n<<" TO "<<j<<" ARE =" << logic() << endl;
    }
};
int main()
{
    sum s1;
    s1.setdata();
    s1.display();
    return 0;
}