#include<stdio.h>
#include<string.h>
int main(){
    FILE *f1;
    char a[100],b[100];
    f1=fopen("dev.txt","w+");
    while(1)
    {
        gets(a);
        if(strlen(a)!=0)
        {
        fputs(a,f1);
        putc('\n',f1);
        }
        else
        break;
    }
    rewind(f1);
     /*while(1)
    {
        
        if(fgets(b,75,f1)!='\0')
        printf("%s",b);
        
        else
        break;
    }*/
    while(fgets(b,75,f1)!=EOF)
    {
        //fgets(b,75,f1);
        printf("%s",b);
    }
    

    fclose(f1);
    return 0;
}