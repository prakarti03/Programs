#include<stdio.h>

int main(){
    int n;
    float i,a=0;
    float sum=0;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%f",1/i);
        printf("\n");
        sum=sum+1/i;
    }
    printf("SUM=%f",sum);
    
    return 0;
}