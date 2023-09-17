#include <stdio.h>

int main()
{

    int i;
    int marks[100];          //type is 'int' marks is 'name' and 100 is 'size' 
    for (i = 0; i < 10; i++)   //for loop
    {
        printf("enter marks:\n");
        scanf("%d", &marks[i]);  //input marks
    }
 for (i = 0; i <10; i++)
 {
     printf("marks are: %d\n",marks[i]);         //printing marks
   
 }
    return 0;
}