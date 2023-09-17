#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,l;
    gets(a);
    gets(b);
    l=strlen(a);
    for(i=0;b[i]!='\0';i++)
    {
        a[l]=b[i];
        l++;
    }
    a[l]='\0';
    printf("concated string is:\n");
    puts(a);
    return 0;
}