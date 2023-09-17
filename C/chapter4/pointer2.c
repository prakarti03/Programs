#include <stdio.h>

int main()
{
    int var[2][5] = {{10, 200, 389, 88, 98},
                     {20,30,40,50,60}};
    int i,j;
    int (*ptr)[5];
    ptr = &var[0];
    for(i=0;i<2;i++)
    {
        printf("aray %d elements\n",i+1);
         for(j=0;j<5;j++)
         {
            printf("%d\n",*((*ptr)+j));
         }
         ptr++;
    }
   
    return 0;
}