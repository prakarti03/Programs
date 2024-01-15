#include <stdio.h>
#include <stdlib.h>
#include "node.h"

node *takeinput(node *head, node *tail)
{
    int da;
    printf("enter data: \n");
    scanf("%d", &da);
    while (da != -1)
    {
        node *newnode = (node *)malloc(sizeof(node));
        newnode->data = da;
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
            //   OR
            // tail = newnode
            /* node *temp = (node *)malloc(sizeof(node));
             temp = head;
             while (temp->next != NULL)
             {
                 temp = temp->next;
             }
             temp->next = newnode;*/
        }
        printf("Enter data:");
        scanf("%d", &da);
    }
    return head;
}
void print(node *first)
{
    while (first != NULL)
    {
        printf("%d ", first->data);
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