#include <stdio.h>
#define capacity 4

int nextindex = 0;
int arr[capacity];

// return no. of elements present in my stack
void size()
{
    printf("TOTAL ELEMENTS PRESENT IN STACK IS %d\n", nextindex);
}
// to check if the stack is empty or full
int isempty()
{
    if (nextindex == 0)
        return 1;
    else
        return 0;
}
// to insert an element
void push()
{
    int element, n;
    printf("Enter the total no. of elements to insert:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (nextindex == capacity)
        {
            printf("Stack full.\n");
            return;
        }
        printf("Enter the element to insert:\n");
        scanf("%d", &element);
        arr[nextindex] = element;
        nextindex++;
    }
}
// to delete element
void pop()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
    }
    else
    {
        nextindex--;
        printf("The element popped is %d\n", arr[nextindex]);
    }
}

// to access the top element of stack
void peek()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
    }
    else
        printf("The TOPMOST element in stack is %d\n", arr[nextindex - 1]);
}
// to access all the elements of the stack
void traverse()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
    }
    else{
    for (int i = nextindex-1; i >= 0; i--)
    {
        printf("Element: %d\n", arr[i]);
    }}
}
void main()
{
    int choice;
    do
    {
        printf("Press 1 for PUSH():\nPress 2 for POP():\nPress 3 for PEEK():\nPress 4 for TRAVERSE():\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                traverse();
                break;
            default:
               printf("INVALID CHOICE.\n");
               break;
        }

    } while (choice != 0);
}