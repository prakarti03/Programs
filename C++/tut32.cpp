#include<iostream>

using namespace std;

class alpha
{
    int x;
    public:
    alpha(int i){
        x = i;
        showx();
    }
    void showx(){
        cout<<"x is:"<<x<<endl;
    }
};
class beta
{
    int y;
    public:
    beta(int i)
    {
        y = i;
        showy();
    }
    void showy(){
         cout<<"y is:"<<y<<endl;
    }
};
class gamma: public alpha,public beta
{
    int m,n;
    public:
    gamma(int a,int b,int e,int f):alpha(a),beta(b)
    {
        m = e;
        n = f;
    }
    void show(){
    cout<<"m is:"<<m<<endl;
    cout<<"n is:"<<n<<endl;}
};
int main(){
    gamma g1(2,3,5,6);
    g1.show();
    return 0 ;
}