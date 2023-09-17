#include<stdio.h>
#define  AREA(X) (3.14*X*X)
#include"dev.h"
void main()
{
   float r1,r2,a;
   printf("r1");
   scanf("%f",&r1);
    a=AREA(r1);
    printf("area of r1 = %.2f",a);
    printf("\nr2");
   scanf("%f",&r2);
    a=AREA(r2);
    printf("area of r2 = %.2f",a);
    printf("\n%d",mul(3,4));

}