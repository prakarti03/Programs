#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a and b is:\n");
    scanf("%d%d", &a, &b);
    
    a = a + b;
    b = a - b;
    a=a-b;
    printf("a=%d\nb=%d\n", a, b);
    return 0;
}