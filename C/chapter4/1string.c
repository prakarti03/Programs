#include<stdio.h>
#include<string.h>

int main()
{
    char aa[20]="she is the good girl";
    char *r;
    r = strstr(aa,"the");

    puts(r);

    return 0;
}