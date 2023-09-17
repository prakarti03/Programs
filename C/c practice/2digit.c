#include <stdio.h>

int main()
{
    int x;
    char ch;
    printf("Enter any character:\n");
    scanf("%d",&x);
    scanf("%c",&ch);
   

    if (x > 0 && x < 10)
    {
        printf("IT IS A DIGIT");
    }
    else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("IT IS AN ALPHABET");
    }
    else
    {
         printf("IT IS A SYMBOL");
    }
    return 0;
}