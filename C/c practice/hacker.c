#include<stdio.h>
#include<string.h>
int main()
{  
     char c,a[100];
     char b[100];

     scanf("%c",&c);
     fflush(stdin);
     gets(a);
   
     gets(b);

     printf("%c\n",c);
     puts(a);
     puts(b);
  //method 2
  
   /*  char ch;
    char s[50];
    char sen[50];
    
    scanf("%c\n",&ch);
    gets(s);
    gets(sen);
    printf("%c\n",ch);
    puts(s);
    puts(sen);*/

    return 0;
}