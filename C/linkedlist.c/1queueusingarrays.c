#include<stdio.h>
# define capacity 6

int arr[capacity];
int front = -1;
int rear = 0;
int size = 0;

void sizee()
{
    printf("THE TOTAL ELEMENTS IN QUEUE ARE %d.\n",size);
}

int enqueue()
{
    int insert, n;
    printf("Enter the total no. of elements to insert:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
      if (size==capacity)
    {
        printf("QUEUE OVERFLOW.\n");
        return 0;
    }
    printf("Enter element:\n");
    scanf("%d",&insert);
    arr[rear] = insert;
    rear = (rear +1) % capacity;
    if(front ==  -1)
    {
        front = 0;
    }
    size++;
    }
}
void dequeue(){
    if (size == 0)
    {
        printf("QUEUE UNDERFLOW.\n");
        front = -1;
        rear = 0;
    }
    else
    {
    int del;
    del = arr[front];
    front = (front+1) % capacity;
    size--;
    printf("The Deleted element is %d\n",del);
}}
int traverse()
{
    int i = front;
    if (size == 0)
    {
        printf("QUEUE UNDERFLOW.\n");
        return 0;
    }
     do
    {
        printf("ELEMENT : %d\n",arr[i]);
        i=(i+1) % capacity;
    }while(i != rear);
}
int main()
{
    int choice;
   
     while (choice != 0)
    {
        printf("Press 1 for insert():\nPress 2 for delete():\nPress 3 for front() element:\nPress 4 for Traverse():\n");
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
                printf("The Front element is %d\n",arr[front]);
                sizee();
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