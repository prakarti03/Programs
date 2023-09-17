#include <stdio.h>

int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
}

int main()
{
    int n1, n2;
    printf("enter n1 and n2:");
    scanf("%d %d", n1, n2);

    printf("teh prime no b/w %d and %d is:", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        if (isprime(i))
        {
            printf("%d", i);
        }
    }
    return 0;
}