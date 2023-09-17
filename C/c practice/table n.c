#include<stdio.h>

int main(){
    int i,j,n,a;
    printf("enter the table you want:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {   
        for(j=1;j<=10;j++)
        {  
            a=i*j;
        printf("%d*%d=%d\n",i,j,a);
        }
    }
    

    return 0;
}