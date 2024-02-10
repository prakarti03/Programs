#include <stdio.h>

int main()
{
    int i,j,k;
    for ( k = 0; k < 11; k++)
    {
        for ( j = 0; j < 3; j++)
        {
            for ( i = 0; i < 10; i++)
            {
                if(k == 3 || k == 7)
                {
                    printf("-");
                }
                else
                {
                printf(" ");
                }
            }
            if(j < 2)
            {
            printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}