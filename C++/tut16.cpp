//more examples on friends
#include<iostream>

using namespace std;
class y;
class x
{
    int data;
    public:
    void setvalue(int value){
        data=value;
    }
    friend void add(x,y);
};
class x;
class y
{
 int num;
 public:
 void setvalue(int value)
 {
    num =value;
 }
 friend void add(x,y);
};
void add(x o1,y o2)
{
   cout<<"sum of the datas of x and y is "<<o1.data+o2.num<<endl;
}

int main(){
    x a1;
    a1.setvalue(6);

    y b1;
    b1.setvalue(6);

    add(a1,b1);

    return 0 ;
}