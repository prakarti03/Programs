#include <stdio.h>

int main()
{
    FILE *fp;
    char c = 'k';
    fp = fopen("yug.bin", "wb+");
    fwrite(&c, sizeof(char)*4, 1, fp);
    rewind(fp);
    fread(&c, sizeof(char)*4, 1, fp);
    printf("%c", c);
    fclose(fp);
    return 0;
}