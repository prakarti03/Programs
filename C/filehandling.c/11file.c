#include<stdio.h>
void func1();
void func2();
//#pragma startup func1
//#pragma exit func2
void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();
 void func1()
{
     printf("i am in func1\n");
}
void func2()
{
     printf("i am in func2\n");
}
void main()
{
    printf("i am in main\n");
}
