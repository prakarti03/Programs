#include<stdio.h>
#include<math.h>

void main()
{
    int i,n,a[20],c=0,sum=0;
    printf("enter n:\n");
    scanf("%d",&n);

   for(i=1;i<=n;i++)
  {
     a[c]=pow(10,i)-1;
     c++;
     printf("%d\n",a[c]);
    // sum=sum+a[c];
     //5c++;
   
  }
   // printf("SUM=%d",sum);
}