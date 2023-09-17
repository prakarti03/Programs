#include <stdio.h>

int main()
{
    FILE *fp;
    char c = 'x';
    char ch;
    fp = fopen("meher.txt", "w+");
    fprintf(fp, "%c", c);
    rewind(fp);
    ch = getc(fp);
    printf("%c", ch);
    fclose(fp);
    return 0;
}