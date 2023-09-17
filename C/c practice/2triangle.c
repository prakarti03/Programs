#include<stdio.h>

int main()
{
    int s1,s2,s3;
    printf("enter the three sides:\n ");
    scanf("%d%d%d",&s1,&s2,&s3);
     
    if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
    {
        printf("triangle is valid\n");
    }
    else
    {
        printf("triangle is not valid\n");
    }
    return 0;
}