#include<stdio.h>
void main()
{
    int a=20;
    int *p;
    p=&a;
printf("%u\n",p);
printf("%d\n",*p);
    (*p)++;
    printf("%d",*p);
}