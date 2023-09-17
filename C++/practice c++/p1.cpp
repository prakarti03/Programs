#include<iostream>

using namespace std;

class number
{
    int a;
    public:
    void setdata(){
        cout<<"Enter any number:"<<endl;
        cin>>a;
        display();
    }
    void display();
    
};
void number::display()
{
    int j;
    if(a>0)
    cout<<"NUMBER IS POSITIVE."<<endl;
    else if(a<0)
    cout<<"NUMBER IS NEGATIVE."<<endl;
}
int main(){
    number n1;
    n1.setdata();
    
    return 0 ;
}