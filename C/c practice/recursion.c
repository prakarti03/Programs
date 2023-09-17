#include<stdio.h>
int factorial (int );
void main(){
    int i,f;
    printf("enter no.\n");
    scanf("%d",&i);

    f=factorial(i);
    printf("the factorial of the given no. is %d\n",f);
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n *factorial(n-1);
    }
}