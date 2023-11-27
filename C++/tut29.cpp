#include<iostream>
#include<string.h>
using namespace std;

class city
{
    char *name;
    int len;
    public:
    city()
    {
        len = 0;
        name = new char[len+1];
    }
    void getdata()
    {
        char *s;
        s = new char[30];
        cout<<"Enter a city:"<<endl;
        cin>>s;
        len = strlen(s);

        name = new char[len + 1];
        strcpy(name,s); 
    }
    void show()
    {
        cout<<name<<endl;
    }
};
int main()
{
    city *p[10];
    int i=1,option;

    do
    {
        p[i] = new city;
        p[i]->getdata(); 
        i++;
        cout<<"Do you want to enter one or more names:"<<endl;
        cout<<"press 1 for yes and 0 for no"<<endl;
        cin>>option;

    } while(option);
    cout<<"\n";
   for(int j = 1; j <= i; j++)
   {
        p[j]->show();
   }
       
    return 0 ;
}