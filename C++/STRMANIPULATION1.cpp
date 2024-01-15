#include<iostream>
#include<string.h>
using namespace std;

class str
{
  char *p;
  int len;
  public:
     str()   //default constructor 
     {
        len = 0;p = 0;
     }
     str(char *x) //parameterized constructor
     {
        len = strlen(x);
        p = new char[len+1];
        strcpy(p,x);
     }
     str(str &s1) //copy constructors
     {
        len = s1.len;
        p = new char[len +1];             //dynamic allocation
        strcpy(p,s1.p);
     }
     ~str(){
      cout<<"DELETED";
     }
     
     friend str operator+(str &,str &); //operator overloading
     friend void operator<=(str &,str &);//operator overloading

     void display()
     {
       cout<<p<<endl;
     }
     //~str(){delete p;}
};
str operator +(str &s2 , str &s3)
{
    str temp;
    temp.len = s2.len + s3.len;
    temp.p = new char[temp.len + 1];
    strcpy(temp.p,s2.p);
    strcat(temp.p,s3.p);
    return temp;
}
void operator <=(str &s4,str &s5)
{
   if(s4.len == s5.len)
   cout<<"STRINGS ARE EQUAL.\n";
   else if(s4.len < s5.len)
   cout<<"FIRST STRING SMALLER THAN SECOND STRING.\n";
   else
   cout<<"STRINGS ARE UNEQUAL.\n";
}
int main()
{
     char x[] = "GARG";
     char y[] = "PRAKARTI";
     str t1(x),t2(t1),t3(y),t4(t3),t5,t6,t7,t8;
     t1.display();
     t2.display();
     t3.display();
     t4.display();

    t5 = t1 + t3;
         t5.display();

    t6 = t2 + t4;
         t6.display();

    t7 = t1 + t2;   
      t7.display();

    t8 = t3 + t4;
     t8.display();
   
    t1 <= t3;
    t1 <= t2;

    return 0 ;
}