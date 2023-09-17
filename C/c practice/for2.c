#include<stdio.h>

int main(){
    int a=1,b=2;
    do
    {
        printf("%d\n",a);
        a=a+b;
        b++;
    }while(a<=21);
    return 0;
}