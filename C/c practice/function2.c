#include<stdio.h>
void sum(int,int);

void main()
{
    int a,b;
    printf("enter two numbers a,b:\n");
    scanf("%d%d",&a,&b);

    sum(a,b);
} 
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("the sum is %d\n",c);
}