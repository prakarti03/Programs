#include <stdio.h>
#include<string.h>

struct book
{
    int pages;
    float price;
    char a[20];
} b1, b2, b3;

void main()
{
    b1.pages = 300;
    b1.price = 90.0;
    strcpy(b1.a, "DEV");

    b2 = b1;

    printf("enter pages,price and name:\n");
    scanf("%d%f%s", &b3.pages, &b3.price, b3.a);

    printf("\npages\tprice\t\tname\n");

    printf("%d     %f       %s\n", b1.pages, b1.price, b1.a);

    printf("%d     %f       %s\n", b2.pages, b2.price, b2.a);

    printf("%d     %f       %s", b3.pages, b3.price, b3.a);
}
