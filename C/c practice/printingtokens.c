#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int i,l;
    
    gets(name);
    l=strlen(name);

    for(i=0;i<l;i++)
    {
        if(name[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",name[i]);
        }
    }

    return 0;
}