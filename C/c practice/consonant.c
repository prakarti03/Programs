#include <stdio.h>
int main()
{
    char ch,a,e,i,o,u;
    printf("ENTER THE CHARACTER:\n");
    scanf("%c", &ch);

    if (ch == 'a', 'e', 'i','o','u')
    {
        printf("The given character is a vowel\n");
    
    }
    else if(ch!=a,e,i,o,u)
    {
        printf("the given character is a consonant\n");
    }
    return 0;
}