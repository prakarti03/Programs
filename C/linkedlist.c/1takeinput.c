#include <stdio.h>
#include <stdlib.h>
#include "node.h"

//creation of linked list
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
//traverse linked list
void print(node *first)
{
    while (first != NULL)
    {
        printf("%d ", first->info);
        first = first->next;
    }
}
int main()
{
    node *heads = NULL;
    node *tails = NULL;
    heads = takeinput(heads, tails);
    print(heads);
    return 0;
}