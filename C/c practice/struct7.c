#include<stdio.h>

int main(){

    int p=5;
    int *a;
    a=&p;
    printf("%d\n",p);
    printf("%u\n",a);
    printf("%d\n",*a);


    return 0;
}