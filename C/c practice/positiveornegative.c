# include <stdio.h>
int main()
{
    int a;

    printf("enter the value of a\n");
    scanf("%d", &a);

    if(a<0){
    printf("a is negative\n");
    }
    if(a==0){
    printf("a is equals to zero\n");
    }
    if(a>0){
    printf("a is positive\n");
    }
    return 0;
}