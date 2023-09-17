#include<stdio.h>

int main(){
    int a1,a2,a3;
    printf("enter the a1,a2 and a3:\n");
    scanf("%d%d%d",&a1,&a2,&a3);

    if(a1+a2+a3 == 180)
    {
        printf("triangle is valid\n");
    }
    else
    {
        printf("triangle is not valid\n");
    }
    return 0;
}