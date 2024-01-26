#include<stdio.h>
#include<stdlib.h> 
#include "node.h"

node *takeinput(node *head, node *tail)
{
    int da;
    printf("enter data: \n");
    scanf("%d", &da);
    while (da != -1)
    {
        node *newnode = (node *)malloc(sizeof(node));
        newnode->info = da;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        printf("Enter data: \n");
        scanf("%d", &da);
    }
    return head;
}
void traversi(node *trav)
{
  while(trav != NULL)
  {
     printf("Element: %d\n", trav->info);
     trav = trav->next;
  }
}
                //CASE 1
node * insertatbeg(node *head,int data)
{
     node *fifth = (node *)malloc(sizeof(node));
     fifth->info = data;
     fifth->next = head ;
     head = fifth;
     return head;

}
                //CASE 2
node * insertinbet(node *head,int i,int data)
{
   node *newnode = (node *)malloc(sizeof(node));
   newnode -> info = data;
   if(i == 0)
   {
    newnode->next = head ;
     head = newnode;
     return head;
   }
   node *temp = head;
   int count = 0;
   while(temp -> next != NULL && count < i-1)  
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
node * insertatend(node *first,int data)
{
     node *newnode = (node *)malloc(sizeof(node));
     newnode -> info = data; 

     node *ptr = first;
     
     while (ptr->next != NULL)
     {
       ptr = ptr ->next;
     }
     ptr ->next = newnode;
     newnode ->next = NULL;
     return first; 
}

int main(){
    node *first = NULL;
    node *second =NULL;
    
   first = takeinput(first ,second);
    
    
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