#include<stdio.h>

int main(){
    
    int x=1,sum=0,n;
    printf("enter n:\n");
    scanf("%d",&n);
    
    while(x<=n)
    {
        printf("%d\n",x);
    
        sum=sum+x;
        x++;
    }
    printf("sum=%d",sum);
    return 0;
}