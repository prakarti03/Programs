#include<iostream>

using namespace std;

int main(){
    int *p,u=10,**ptr;
    p=&u;
    ptr=&p;
     cout<<"address of p="<<&p<<endl;
     cout<<"address of ptr="<<&ptr<<endl;
     cout<<"address of u="<<&u<<endl;
    //  cout<<"address of ="<<p<<endl;
    //  cout<<"address of p="<<p<<endl;
     cout<<"value of p="<<p<<endl;
     cout<<"value of ptr="<<ptr<<endl;
     cout<<"value of u="<<u<<endl;
    //  cout<<"value of p="<<p<<endl;
    //  cout<<"value of p="<<p<<endl;
    // cout<<"value of p="<<p<<endl;
    //  cout<<"value of u="<<&u<<endl;
    return 0 ;
}