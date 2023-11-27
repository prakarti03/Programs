//      pointers to objects
#include<iostream>

using namespace std;

class item
{
    int code;
    float price;
    public:
    void getdata(int cod,float pri)
    {
        code = cod;
        price = pri;
    }
    void show()
    {
        cout<<"code: "<<code<<endl;
        cout<<"price: "<<price<<endl;
    }
};
const int size = 2;
int main(){
    
    item *p = new item[size]; 
    item *d = p;
    int co;
    float pr;
    for(int i = 0 ; i<size ; i++)
    {
        cout<<"Enter the code and price of Item"<<i+1<<endl;
        cin>>co>>pr;
        p->getdata(co,pr);
        p++;
    }
    for(int i = 0; i<size;i++)
    {
        cout<<"Item"<<i+1<<endl;
        d->show();
        d++;
    }
    return 0 ;
}