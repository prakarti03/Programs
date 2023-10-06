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
      void show()
      {
        cout<<name<<endl;
        cout<<len<<endl;
      }
};
int main(){
    //char t[] = "SOFTWARE";
    char *first = "soft";
    str s1(first);
    str s2("DEV");
    str s3("prakarti"); //wrong output
    
    s1.show();
    s2.show();
    s3.show();
    return 0 ;
}