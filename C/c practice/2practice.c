#include<stdio.h>

int main()
{
    int i,j,l;
    for(i=1;i<6;i++)
    {
       for(l=6-i;l>=1;l--)
      {
        printf(" ");
      }
       for(j=1;j<=i;j++)
       {
         printf(" *");
        
       }printf("\n");
     }
     for(i=6;i>=1;i--)
    {
         for(l=6-i;l>=1;l--)
      {
        printf(" ");
      }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
  
    return 0;
}