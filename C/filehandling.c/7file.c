#include <stdio.h>

int main()
{
    FILE *fp;
    char a[100] = "i am in class bca", b[100];
    int i;
    fp = fopen("abc.txt", "w+");
    fputs(a, fp);
    i = ftell(fp);
    printf("%d\n", i);
    rewind(fp);
    i = ftell(fp);
    printf("%d\n", i);
    fseek(fp, -3, SEEK_END);
    i = ftell(fp);
    printf("%d\n", i);
    fputc('p', fp);
    //rewind(fp);
    fgets(b,100,fp);
    //puts(b);
    printf("%c\n", b);
    i=ftell(fp);
    printf("%d\n",i);
    
    fclose(fp);
    return 0;
}