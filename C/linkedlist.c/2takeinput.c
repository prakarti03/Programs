#include <stdio.h>
#include <stdlib.h>
#include "node.h"

node *takeinput(node *head, node *tail)
{
    printf("Press -1 to stop inserting.\n");
    int da;
    printf("Enter the data item: ");
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
        printf("Enter the data item: ");
        scanf("%d", &da);
    }
    return head;
}
void print(node *first)
{
    while (first != NULL)
    {
        printf("Data items are: %d\n", first->info);
        first = first->next;
    }
}
void main()
{
    int flag = 0;
    char choice, cont;
    node *heads = NULL;
    node *tails = NULL;

    while (flag == 0)
    {
        printf("\nPress [i] to insert\nPress [s] to show\nEnter choice: ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case 'i':
            heads = takeinput(heads, tails);
            break;
        case 's':
            print(heads);
            break;
        default:
            printf("\nPress [i] to insert\nPress [s] to show\nEnter choice: ");
            scanf(" %c", &choice);
            continue;
        }
        printf("DO YOU WANT TO CONTINUE [Y/N]\n");
        scanf(" %c", &cont);
        if (cont == 'n' || cont == 'N')
        {
            flag = 1;
        }
    }
}