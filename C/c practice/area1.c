# include <stdio.h>

int main()
{
    float p,r,n;
    printf("enter the value of p\n");
    scanf("%f", &p);

    printf("enter the value of r\n");
    scanf("%f", &r);

    printf("enter the value of n\n");
    scanf("%f", &n);

    printf("The simple interest is %f\n", (p*r*n)/100);

    return 0;
}
