#include<stdio.h>
#include<string.h>

void main()
{
    char *found;
    char a[20],b[20];
    printf("enter string:\n");
    gets(a);
    gets(b);
    found= strcat(b,a);
    puts(found);
}   