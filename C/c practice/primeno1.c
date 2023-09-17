#include <stdio.h>

int main()
{
    int n, i;
    int isprime = 1;
    printf("Enter n:\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
        }
    }
    if (isprime)
    {
        printf("The number %d is prime.", n);
    }
    else
    {
        printf("The number %d is not prime.", n);
    }
    return 0;
}