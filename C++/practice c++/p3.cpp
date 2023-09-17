#include<iostream>
using namespace std;
class sum
{
    int n;
    public:
    void setdata()
    {
      cout<<"Enter n:"<<endl;
      cin>>n;
    }
    int logic()
    {
        int sum;
        sum= (n*(n+1))/2;
        return sum;
    }
    void display()
    {
        cout<<"THE SUM OF "<<n<<" NATURAL NUMBERS ARE ="<<logic()<<endl;
    }
};
int main(){
    sum s1;
    s1.setdata();
    s1.display();
    return 0 ;
}
// class sum {
//     int n;
//     public:
//     void setdata()
//     {
//         cout<<"enter n:"<<endl;
//         cin>>n;
//     }
//     int logic();
//     void display()
//     {
//         cout<<"Sum of first n natural no. are = "<<logic()<<endl;
//     }
// };
// int sum::logic()
// {
//    int i,summ=0;
//    cout<<"FIRST "<<n<<" NATURAL NUMBERS ARE : "<<endl;
//    for(i=0;i<=n;i++)
//    {   cout<<i<<endl;
//        summ=summ+i;
//    }return summ;}
