#include<stdio.h>
#include<string.h>

struct complex
{
    int r;
    int i;
}c1,c2;

void main()
{
    printf("enter the real and imaginary part of 1 no.:\n");    
    scanf("%d%d",&c1.r,&c1.i);

    printf("enter real and imaginary part of 2 no.:\n ");
    scanf("%d%d",&c2.r,&c2.i);

    fun(c1,c2);

}
void fun(struct complex c1,struct complex c2)
{
    int p,q;
    p=c1.r+c2.r;
    q=c1.i+c2.i;

    printf("\nresult = %d+%di",p,q);
}