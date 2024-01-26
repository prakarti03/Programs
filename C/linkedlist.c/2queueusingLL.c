#include <stdio.h>
#include "node.h"
#include <stdlib.h>

node *front = NULL;
node *rear = NULL;
int size = 0;

int isempty()
{
    if (size == 0)
        return 1;
    else
        return 0;
}
void peek()
{
   if(isempty())
   {
    printf("QUEUE UNDERFLOW.\n");
   }
   else
      printf("The Front element is %d\n",front->info);
}
void *enqueue()
{
    int element, n;
    printf("Enter the total no. of elements to insert:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element:\n");
        scanf("%d", &element);
        node *newnode = (node *)malloc(sizeof(node));
        newnode->info = element;
        newnode->next = NULL;
        if (front == NULL)
        {
            front = newnode;
            rear = newnode;
            size++;
        }
        else
        {
            rear->next = newnode;
            rear = rear->next;
            size++;
        }
    }
}
void dequeue()
{
    if(isempty())
    {
         printf("QUEUE UNDERFLOW.\n");
    }
    else
    {
    node *temp = (node *)malloc(sizeof(node));
    temp = front;
    front = front->next;
    size--;
    printf("The Dequeued element is:%d\n", temp->info);
    free(temp);
    }
}
void traverse()
{
       if(isempty())
    {
         printf("QUEUE UNDERFLOW.\n");
    }
    else{
    node *temp = front;
    while (temp != NULL)
    {
        printf("ELEMENT: %d\n", temp->info);
        temp = temp->next;
    }}
}
int main()
{
     int choice;
   
     while (choice != 0)
    {
        printf("Press 1 for enqueue():\nPress 2 for dequeued():\nPress 3 for front() element:\nPress 4 for Traverse():\n");
        scanf("%d", &choice);
         if(choice == 0 ||choice == 1 ||choice == 2 ||choice == 3 ||choice == 4 )
        { 
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                printf("The Total Number Of Elements In Queue Are: %d\n",size);
                break;
            case 4:
                traverse();
                break;
            default:
               printf("INVALID CHOICE.\n");
               break;
        }
    } else
    {
        return 0;
    }
    }
    return 0;
}