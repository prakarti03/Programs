#include<iostream>
#include<string.h>
using namespace std;

class str
{
   char *name;
   int len;
   public:
      str(){
        len = 0;
        name = new char[len +1];
      }
      str(char *x)
      {
        len = strlen(x);
        name = new char[len + 1];
        strcpy(name,x);
      }
      ~str()   //destuctor will be automatically called at end
      {
        cout<<"DELETED";
      }
       str(str & i,str & j) //dynamic allocation copy constructor
       {
         len = i.len + j.len;
         delete name;
         name = new char[len + 1 ];

         strcpy(name , i.name);
         strcat(name , j.name);
       }
      void show()
      {
        cout<<name<<endl;
        cout<<len<<endl;
      }
};
int main(){
    //char t[] = "SOFTWARE";
    char *first = "soft";
    str s1(first), s2("DEV"), s3("prakarti"); //wrong output
    str s4(s1 , s2),s5(s4,s3);

    s1.show();
    s2.show();
    s3.show();
    s4.show();
    s5.show();
    return 0 ;
}