#include<stdio.h>
#include<stdlib.h> 

struct link
{
     int info;
     struct link *next;
};

void traversi(struct link *trav)
{
  while(trav != NULL)
  {
     printf("Element: %d\n", trav->info);
     trav = trav->next;
  }
}
                //CASE 1
struct link * insertatbeg(struct link *head,int data)
{
   struct link *fifth = (struct link *)malloc(sizeof(struct link));
     fifth->info = data;
     fifth->next = head ;
     head = fifth;
     return head;

}
                //CASE 2
struct link * insertinbet(struct link *head,int i,int data)
{
   struct link *newnode = (struct link *)malloc(sizeof(struct link));
   newnode -> info = data;
   if(i == 0)
   {
    newnode->next = head ;
     head = newnode;
     return head;
   }
   struct link *temp = head;
   int count = 0;
   while(temp -> next != NULL && count < i-2)  
    { 
      temp = temp ->next;
      count ++;
    }
    if(temp->next != NULL )
    {
      newnode -> next = temp -> next;
      temp -> next = newnode;
    }
     return head;
}

               //CASE 3
struct link * insertatend(struct link *first,int data)
{
     struct link *newnode = (struct link *)malloc(sizeof(struct link));
     newnode -> info = data; 

     struct link *ptr = first;
     
     while (ptr->next != NULL)
     {
       ptr = ptr ->next;
     }
     ptr ->next = newnode;
     newnode ->next = NULL;
     return first; 
}

int main(){
    struct link *first;
    struct link *second;
    struct link *third;
    struct link *fourth;

    //memory allocation of pointer variables in heap
    first = (struct link *)malloc(sizeof(struct link));
    second = (struct link *)malloc(sizeof(struct link));
    third = (struct link *)malloc(sizeof(struct link));
    fourth = (struct link *)malloc(sizeof(struct link));
    
    //CREATION OF A LINKED LIST
    first->info = 22;
    first->next = second;

    second->info = 33;
    second->next = third;

    third->info = 44;
    third->next = fourth;

    fourth->info = 55;
    fourth->next = NULL;
    
    first = insertatbeg(first,11);
    printf("\n");
        first = insertatbeg(first,10);
    traversi(first);

    int data,loc;
    printf("Enter the value and location:\n");
    scanf("%d%d",&data,&loc);
    first = insertinbet(first,loc,data);
    traversi(first);

    // int N;
    // printf("Enter data to insert at end:\n");
    // scanf("%d",&N);
    // first = insertatend(first,N);
    // traversi(first);

    return 0;
}