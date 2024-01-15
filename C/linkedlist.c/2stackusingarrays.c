#include <stdio.h>
#include <stdlib.h>

int nextindex = 0;

struct stack
{
    int capacity;
    int arr[4];

} s1;
// return no. of elements present in my stack
void size()
{
    printf("TOTAL ELEMENTS PRESENT IN STACK IS %d\n", nextindex);
}
int isempty()
{
    if (nextindex == 0)
        return 1;
    else 
        return 0;
}
// to insert an element
void push(int element)
{
    if (nextindex == s1.capacity)
    {
        printf("Stack full.\n");
        return;
    }
    s1.arr[nextindex] = element;
    nextindex++;
}
// to delete element
int pop()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
        return 1;
    }
    nextindex--;
    printf("%d\n", s1.arr[nextindex]);
}
// to acces the top elements of stack
int top()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
        return 1;
    }
    printf("%d\n", s1.arr[nextindex - 1]);
}
int main()
{
    // int s;
    // printf("Enter the size of array: \n");
    // scanf("%d",&s);
    s1.capacity = 4;
    // s1.arr[4];
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