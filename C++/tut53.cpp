//MULTIPLE TEMPLATES AND DEFAULT PARAMETERS IN TEMPLATES
#include<iostream>
using namespace std;
/*
template<class T1,class T2>
template<class T1=int,class T2 = float>//default parameters
class a{
    //body
}
*/
template<class T1=int ,class T2=float> //default arguments
class test
{
    public:
        T1 a;
        T2 b;
        test(T1 x,T2 y)
        {
            a= x;
            b= y;
        }
        void display()
        {
            cout<<"the value of a is:"<<a<<endl;
            cout<<"the value of b is:"<<b<<endl;
        }

};
int main(){
    test <> y(4,4.1);//using default parameters
    y.display();
    cout<<endl;
    test <float ,char>t(98.99,'p');//parameters specified
    t.display();
    return 0 ;
}