#include<stdio.h>
#include<string.h>

void main()
{
    char a[100],b[100];
    int f;
    printf("enter first string\n");
    gets(a);
     
    f=strlen(a);
    strcpy(b,a);
 
printf("%d\n",f);
puts(b);
strupr(b);
puts(b);
strlwr(b);
puts(b);
if(strcmp(a,b)==0)
printf("strings are equal\n");
else
printf("not equal\n");
  
strcat(a,b);
puts(a);
}