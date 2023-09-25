#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[100];
    printf("enter plain text:\n");
    gets(str);

    printf("cipher text is:\n");
    
    for ( i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 1;
    }
    puts(str);
    return 0;
}