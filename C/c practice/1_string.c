#include <stdio.h>
#include<string.h>

int main()
{
    int l = 0;
    char a[20], i;

    printf("enter name\n");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        l=l+1;
    }

    printf("lenth is %d\n", l);

    return 0;
}