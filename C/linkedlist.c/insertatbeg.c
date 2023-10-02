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
int main(){
    struct link *first;
    struct link *second;
    struct link *third;
    struct link *fourth;
    struct link *fifth;
  
    //memory allocation of pointer variables in heap
    first = (struct link *)malloc(sizeof(struct link));
    second = (struct link *)malloc(sizeof(struct link));
    third = (struct link *)malloc(sizeof(struct link));
    fourth = (struct link *)malloc(sizeof(struct link));
    fifth = (struct link *)malloc(sizeof(struct link));

    //CREATION OF A LINKED LIST
    first->info = 22;
    first->next = second;

    second->info = 33;
    second->next = third;

    third->info = 44;
    third->next = fourth;

    fourth->info = 55;
    fourth->next = fifth;
    
    fifth->info = 40;
    fifth->next =NULL;
    
    traversi(first);

    return 0;
}