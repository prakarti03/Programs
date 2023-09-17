#include<stdio.h>

int main(){
    int n,i,a=0,b=1,c;
    printf("enter n:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        //printf("%d\n",c);
    }
    return 0;
}