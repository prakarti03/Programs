#include<stdio.h>
void FACTORIAL(int);

void main()
    {
    int x;
    printf("enter x\n");
    scanf("%d", &x);

    FACTORIAL(x);
     }

    void FACTORIAL(int a)
    {
        int f=1;
        while(a>=1)
        {
            f=f*a;
            a--;
        }
        printf("fact is %d\n", f);


    }


    
        