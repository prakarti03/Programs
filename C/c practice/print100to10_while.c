#include <stdio.h>

int main()
{
    int a = 1;

    do
    {
        if(a % 2 == 0)
        {
            printf("%d\n", -a);}
        else{   
             printf(" %d\n", a);
            }
        a++;
    }while (a <= 10);
    return 0;
}