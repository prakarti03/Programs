#include<stdio.h>
#include<string.h>

struct distance
{
    int infeet;
    int inches;

}b1; 

void main()
{   
    int sum;
    printf("enter distance in feet:\n");
    scanf("%d",&b1.infeet);

    printf("enter distance in inches:\n");
    scanf("%d",&b1.inches);

    sum = b1.infeet*12+b1.inches;

    printf("distance in feet is %d\n",b1.infeet);
    printf("distance in inches is %d\n",b1.inches);

    printf("the addition of distance is %d\n",sum);

}