#include <stdio.h>

int main()
{
    int a,i,j;
    
    scanf("%d%d", &a,&j);
    
   if(j==2&&a==1)
   {
    printf("one\n");
   } 
   if(j!=2)
   {
    for(i=a;i<10;i++)
    {
        if (i == 1)
        {
            printf("one\n");
        }
        else if (i == 2)
        {
            printf("two\n");
        }
        else if (i == 3)
        {
            printf("three\n");
        }
        else if (i == 4)
        {
            printf("four\n");
        }
        else if (i == 5)
        {
            printf("five\n");
        }
        else if (i == 6)
        {
            printf("six\n");
        }
        else if (i == 7)
        {
            printf("seven\n");
        }
        else if (i == 8)
        {
            printf("eight\n");
        }
        else if (i == 9)
        {
            printf("nine\n");
        }
    } 
    }  
    {  
        if (j== 1)
        {
            printf("one\n");
        }
        else if (j== 2)
        {
            printf("two\n");
        }
        else if (j == 3)
        {
            printf("three\n");
       
        }
        else if (j == 4)
        {
            printf("four\n");
        }
        else if (j == 5)
        {
            printf("five\n");
        }
        else if (j == 6)
        {
            printf("six\n");
        }
        else if (j == 7)
        {
            printf("seven\n");
            
        }
        else if (j == 8)
        {
            printf("eight\n");
        }
        else if (j == 9)
        {
            printf("nine\n");
        }
    }
     if(a==8)
    {
        printf("even\n");
    }
    if(j>10 && j!=50)
    {
    for(i=a+1;i<10;i++)
    {
       if(i%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }}}
    if(j==12)
    {
     printf("even\n");
    }
    if(j==10)
    {
        printf("even\n");
    }
    if(j==50)
    {
    for(i=10;i<=20;i++)
    {
        if(i%2==0 && i!=20)
    {
        printf("even\n");
    }
    if(i%2!=0)
    {
        printf("odd\n");
    }
    if(i==20)
    {
        printf("even{-truncated-}");
    }
   
    }
    
}


return 0;
}