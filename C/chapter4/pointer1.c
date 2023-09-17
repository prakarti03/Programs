#include <stdio.h>

void main()
{
 int arr[5]={1,2,3,4,5};
 int *p;
 int (*ptr)[5];

 p=&arr[0];
 ptr=&arr;
 printf("%d  %d\n",*p,ptr);
 p++;
 ptr++;
 printf("%d  %d",*p,ptr);

 

}
