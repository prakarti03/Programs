#include <stdio.h>

int main()
{
    float c, f;
    printf("enter the value of c: \n ");
    scanf("%f", &c);
    printf("the value of celcius temperature to fahrenheit is %f\n", (c*9/5)+32);
    return 0;
}