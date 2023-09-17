#include <stdio.h>

int main()
{
    int num, rem, rev = 0,p,n=0;
    printf("enter the num:\n");
    scanf("%d", &num);

    p=num;
    while (num != 0)
    {
        rem = num % 10;
        rev =  rem;
        num = num / 10;
        n=n+rem*rem*rem;
    }
    printf("reversed no. is %d\n", rev);

    if ( p == rev)
    {
        printf("IT IS A PALLINDROME.\n"); 
    }
    else
    {
        printf("IT IS NOT A PALLINDROME.\n");
    }
    
    printf("armstrong=%d\n",n);
    return 0;
}