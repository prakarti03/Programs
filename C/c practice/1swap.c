#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter a and b:\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
     printf("a=%d\nb=%d",a,b);
    return 0;
}