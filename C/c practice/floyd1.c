#include<stdio.h>

int main(){
    int i,a,j,b;
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            a=0;
            b=1;
        }else
        {
            a=1;
            b=0;
        }
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("%d",b);
            }
            else{
                printf("%d",a);
            }
        }
        printf("\n");
    }
    return 0;
}