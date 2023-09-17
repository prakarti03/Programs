#include<stdio.h>

int main(){
    int i,n,a,sum=0;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("the positive divisor are:\n");
    for(i=n;i>1;i--)
    {
        if(n%i==0)
       { 
          a=n/i;
        printf("%d\n",a);
          sum=sum+a;
       }
    }
    printf("THE SUM OF THE DIVISOR IS %d.\n\n",sum);
    if(sum==n)
    {
        printf("THE NUMBER IS PERFECT NO.\n\n");
    }
    else
    {
        printf("SO,THE NUMBER IS NOT PERFECT NO.\n\n");
    }   

    return 0;
}