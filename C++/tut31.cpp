#include<iostream>

using namespace std;

class media
{
    char title[10];
    float price;
    public:
        media(){}
        virtual void display(){}
};
class book:public media
{
    
};
int main(){
    
    return 0 ;
}