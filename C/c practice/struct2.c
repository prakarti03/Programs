#include <stdio.h>
#include <string.h>

struct book
{
    int pages;
    float price;
    char a[20];

} b1;

struct book fun(struct book b2);

int main()
{

    b1 = fun(b1);
    printf("\n pages\t price\t name\n");
    printf("%d  %f  %s", b1.pages, b1.price, b1.a);
    return 0;
}
struct book fun(struct book b2)
{
    printf("enter pages,price and name\n");
    scanf("%d  %f  %s", &b2.pages, &b2.price, b2.a);
 /*
  b2.pages = 300;
    b2.price = 90.5;
    strcpy(b2.a, "nature");*/  
    return (b2);
}