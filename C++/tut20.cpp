//coordinates program
#include<iostream>

using namespace std;

class point
{
    int x;
    int y;
    public:
    point(int,int);
    point(int value)//constructor overloading 
    {
      cout<<"the value is"<<value<<endl;
    }
    void display()
    {
        cout<<"coordinates are: ("<<x<<","<<y<<")"<<endl;
    }
};
point::point(int a,int b)
{
  x=a;
  y=b;
}
int main(){
    //implicit call
    point p(1,3);
    p.display();

    //explicit call
    point p1=point(0,0);
    p1.display();

    point p2(9);//constructor overloading 
    return 0 ;
}