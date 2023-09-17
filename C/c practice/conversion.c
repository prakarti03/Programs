#include<stdio.h>

int main()
{
    int i,rem,n,a[20],c=0;
    printf("enter n:\n");
    scanf("%d",&n);

    while(n)
    {
         rem= n%2;
         i=n/2; 
         n=i;
         a[c]=rem;
         c++;
    }
    for(i=c-1;i>=0;i--)
    {
             printf("%d ",a[i]);
    }
   
   

    return 0;
}