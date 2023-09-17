#include<stdio.h>

int main(){
    int a;
    for (a=100 ; a>=10 ; a--)
    {
        if(a%10==0){
        printf("%d\n",a);
        }
    }
    return 0;
}