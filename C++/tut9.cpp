#include <iostream>

using namespace std;
// call by value***************
//*call by reference*****
int swap1(int *, int *);
int swap2(int, int);
int swap3(int &x, int &m)
{
    int temp;
    temp = x;
    x = m;
    m = temp;
    return 0;
}
int main()
{
    //int v1,v2,v3,v4;
    int a, b;
    cout<<"enter a and b:"<<endl;
    cin >> a;
    cin >> b;
    swap1(&a, &b);
    cout << "after swapping" << endl;
    cout << "using call by pointer a is=" << a << endl;
    cout << "using call by pointer b is=" << b << endl;
    
    cout<<"again enter a and b:"<<endl;
     cin >> a;
    cin >> b;
    swap2(a,b);
 cout<<"again enter a and b:"<<endl;
     cin >> a;
    cin >> b;
   
    swap3(a,b);
    cout << "using call by reference a is=" << a << endl;
    cout << "using call by reference b is=" << b << endl;
}
int swap1(int *y, int *z)
{
    int t;
    t = *y;
    *y = *z;
    *z = t;

    return 0;
}

int swap2(int p, int q)
{
    int j;
    j = p;
    p = q;
    q = j;
    cout << "using call by value a is:" << p << endl;
    cout << "using call by value b is:" << q << endl;
    return 0;
}

//***********factorial of a number
// int fact(int n);
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"factorial of "<<n<<" = "<<fact(n)<<endl;
//     return 0;
// }
// int fact(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     return n*fact(n-1);
// }