#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER=\n");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("Number is divisible by 5");
    }
     else if (n % 11 == 0)
    {
        printf("Number is divisible by 11");
    }
    else{
        printf("Number is neither divisible by 5 nor 11.");
    }
    return 0;
}