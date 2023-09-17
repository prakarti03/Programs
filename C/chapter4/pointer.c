#include<stdio.h>
void swap(int*,int*);

void main()
{
   /* int a,b,c;
    printf("enter a and b:\n");
    scanf("%d%d",&a,&b);
    printf("a = %d b = %d\n",*(&a),*(&b));

    c=*(&a);
    a=*(&b);
    b=*(&c);
    printf("NOW,\na is %d\n",*(&a));
    printf("b is %d\n",*(&b));

   /* c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);*/

    int a,b;
    printf("enter two elements:");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
}
void swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}