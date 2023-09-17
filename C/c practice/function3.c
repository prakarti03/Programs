#include <stdio.h>
int multiply(int, int);
int main()
{
    int x, y, z;
    printf("enter two numbers x,y:\n");
    scanf("%d%d", &x, &y);

    z = multiply(x, y);

    printf("the multiplication is %d\n", z);

    return 0;
}
int multiply(int x, int y)
{
    int p;
    p = x * y;
    return (p);
}