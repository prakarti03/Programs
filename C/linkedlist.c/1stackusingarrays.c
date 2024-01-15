#include <stdio.h>
#include <stdlib.h>
#include "stackusingarrays.h"

int main()
{
    // int s;
    // printf("Enter the size of array: \n");
    // scanf("%d",&s);
    s1.capacity = 4;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("%d\n", isempty());
    size();
    top();
    pop();
    pop();
    pop();
    pop();
    pop();
    top();
    return 0;
}