#include<stdio.h>

int main(){
    FILE *f1,*f2;
    char ch;
    f1=fopen("rdx.txt","w");
    fputs("basanti in kutto ke saamne mat nachna",f1);
    fclose(f1);
    f2=fopen("rdx.txt","r");
    while(!feof(f2))
    {
        ch=fgetc(f2);
        
        printf("%c",ch);
    }
    printf("\n");
    fclose(f1);
    return 0;
}