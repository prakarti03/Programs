#include<stdio.h>

int main(){
    int a,p,l,b;//a belongs to area and p means perimeter
    printf("enter l and b=\n");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=2*l+2*b;
    if(a>p)
    {
        printf("%d\narea is greater",a);
    }
    else
    {
        printf("%d\nperimeter is greater",p);
    }
    return 0;
}