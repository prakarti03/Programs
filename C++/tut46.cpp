//ARRAY OF OBJECTS USING POINTERS
#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void setdata(int i,float p)
        {
            id = i;
            price = p;
        }
        void printdata(){
            cout<<"Code of an item is: "<<id<<endl;
            cout<<"The price of the item is: "<<price<<endl;
        }
};
int main(){
    int size = 3;
    //int* ptr = new int[34]; 

    shop* ptr = new shop[size];
    shop* ptrtemp = ptr;
    int r,i;
    float s;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the id and Price of Item "<<i+1<<endl;
        cin>>r>>s;
        //(*ptr).setdata(r,s);
        ptr->setdata(r,s);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"\nData of Item "<<i+1<<endl;
        ptrtemp->printdata();
        ptrtemp++;
    }
    
    return 0 ;
}