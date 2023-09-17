#include<stdio.h>
#include<math.h>

int main(){
    int l,i,n,a[20],c=0,j;
    printf("enter no. of rows:\n");
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
        for(l=5-i;l>=1;l--)
        {
            printf(" ");
        }
       for(j=1;j<=i;j++)
      {  
        a[c]=pow(11,i);
        printf("%d",a[c]);
        c++;
      }
       printf("\n");
    }
    return 0;
}