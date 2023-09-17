#include<stdio.h>
#include<string.h>

struct party
{
    int fooditems;
    int decor;
    int venue;
    char name[20];
}p1={5000,3000,6000};
struct party p2[20];
void main()
{   
     int sum=0;
     int n,i;
     
    printf("Enter no. of friends:\n");
     scanf("%d",&n);
    sum=(p1.fooditems+p1.decor+p1.venue)/n;
    
    for(i=0;i<n;i++)
    {
        printf("Enter the name of friend:\n" );
        scanf("%s",p2[i].name);
       printf("%s expense is %d.\n\n",p2[i].name,sum);
    }
    
}