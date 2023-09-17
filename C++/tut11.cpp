//*******example of classes,public ,private modifiers
#include<iostream>

using namespace std;

class animals
{
    private:
    char dog,cat;
    public:
    char fox,lion;
    void access(char a1,char b1);
    void getdata()
    {
        cout<<"the sound of dog is "<<dog<<endl;
        cout<<"the sound of cat is "<<cat<<endl;
        cout<<"the sound of fox is "<<fox<<endl;
        cout<<"the sound of lion is "<<lion<<endl;
    }
};
void animals::access(char a1,char b1)
{
    dog=a1;
    cat=b1;
}
int main(){
    animals king;
    king.fox='f';
    king.lion='l';
    king.access('d','c');
    king.getdata();
    return 0 ;
}