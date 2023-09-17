#include<stdio.h>

int main(){
    int a[5],i,sum=0;
    printf("enter 5 no.:");

    for(i=0;i<5;i++)
    {
       scanf("%d\n",&a[i]);
    }
    for(i=0;i<5;i++)
    {

      sum=sum+a[i];
    } 
    printf("sum= %d\n",sum);
    
    return 0;
}               