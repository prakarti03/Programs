#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int i,l,flag=0;
    gets(a);
    gets(b);
    l=strlen(a);
    for(i=0;a[i]!='\0'||b[i]!='\0';i++)
    {
        if(a[i]==b[i])
     { 
        flag=1;
        break;
     }
    }
    if(flag==1)
     printf("equal\n");
    else
    printf("not equal\n");
    return 0;
}