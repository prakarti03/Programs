#include<stdio.h>
#include<ctype.h>

void main(){
    int i,l=0,A;
    char a[20];
    printf("enter string:\n");
    gets(a); 


    for(i=0;a[i]!='\0';i++)
    {
        if(isupper(a[i]))
        {
            
            a[i]=tolower(a[i]);
            l++;
        }
    }    
    printf("upper is %d\n",l);
    puts(a);
    
}