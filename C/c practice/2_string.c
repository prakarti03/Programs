#include <stdio.h>
#include<string.h>
int main()
{
    int l;
    char a[20], b[20], i, flag = 1;
    printf("enter first string\n");
    gets(a);

    printf("enter second string\n");
    gets(b);

    for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }

    return 0;
}