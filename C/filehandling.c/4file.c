#include <stdio.h>
#include <string.h>
void main()
{
    FILE *f1;
    int l =0;
    char a[100], c;
    gets(a);
    f1 = fopen("tri.txt", "w+");
    fputs(a, f1);
    rewind(f1);
    // fgets(b, 75, f1);
    // printf("%s", b);
    while(!feof(f1))
    {  
         l++;
        c=fgetc(f1);
        printf("%c",c);
    }

    printf("\nlength of file is %d",l-1);
    
    fclose(f1);
}