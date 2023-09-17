#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,l,p=0;
    gets(str);
    l=strlen(str);

    printf("%d\n",l);
    for(i=0;i<l;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            p++;
        }
    } 
    printf("no. of vowel is %d",p);
    return 0;
}