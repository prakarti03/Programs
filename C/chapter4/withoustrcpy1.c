#include<stdio.h>

int main(){
    char a[100],b[100];
    int l=0,i;
    printf("enter first string\n");
    gets(a);
    

    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
        l++;
    }
    printf("lenth of given string is %d\n",l);
    printf("copied string is\n");
    puts(b);
    return 0;
}