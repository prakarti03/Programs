#include<stdio.h>
#include<stdlib.h>
#include "node.h"

node *top = NULL;
int isempty()
{
    if (top == 0)
        return 1;
    else
        return 0;
}
void push()
{
    int element, n;
    printf("Enter the total no. of elements to insert:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
      int element;
      printf("Enter the element to insert:\n");
      scanf("%d",&element);
      node *newnode = (node*)malloc(sizeof(node));
      newnode->info = element;
      newnode->next = top;
      top = newnode;
}}
void pop()
{
    if (isempty())
    {
        printf("STACK UNDERFLOW.\n");
    }
    else{
    node *newnode = (node*)malloc(sizeof(node));
    newnode = top;
    top = top->next;
    printf("The Popped element is %d\n",newnode->info);     
    free(newnode);
    }
}
void peek()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
    }
    else
        printf("The TOPMOST element in stack is %d\n", top->info);
}
void traverse()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
    }
     else
    {
        node *first = top;
        while(first != NULL)
        {
            printf("Element: %d\n",first->info);
          first = first->next;
          }
    }
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