#include <stdio.h>

int main()
{
    int num, rem, rev = 0,sum=0;
    printf("Enter the num:\n");
    scanf("%d", &num);

    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
        sum=sum+rem;
 
    } while (num != 0);
    printf("the reversed number is %d\n", rev);
    //sum=sum+rem;
    printf("the sum of number is %d\n",sum);

    return 0;
} 