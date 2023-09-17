#include<iostream>

using namespace std;
/*******classes,public and private access modifiers*******/
class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);//declaration hai ki mai aage bnauga ek function
        void getdata()
        {
            cout<<"the value of a is"<<a<<endl;
            cout<<"the value of b is"<<b<<endl;
            cout<<"the value of c is"<<c<<endl;
            cout<<"the value of d is"<<d<<endl;
            cout<<"the value of e is"<<e<<endl;
        }
};
void employee::setdata(int a1,int b1,int c1)// :: is called scope resolution
{
  a=a1;
  b=b1;
  c=c1;
}
int main(){
    employee harry;
    //harry.a=8; this will throw error bcz a is private
    harry.d=34;
    harry.e=88;
    harry.setdata(1,7,9);
    harry.getdata();

    return 0 ;
}