#include<stdio.h>
int main()
{
    char x;

    printf("enter the value of x\n");
    scanf("%c", &x);

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ){
    printf("x is a vowel\n");
    }
    else
    {
    printf("x is a consonant\n");
    }
    return 0;
}