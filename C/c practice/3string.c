#include<stdio.h>
#include<string.h>

int main(){
    int l=0;
    char a[20],b[20],i;
    printf("enter name\n");
    gets(a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    puts(b);
    return 0;
}