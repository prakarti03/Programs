#include <stdio.h>
#include <stdlib.h>

struct link
{
    int info;
    struct link *next;
};

void traversi(struct link *trav)
{
    while (trav != NULL)
    {
        printf("Element: %d\n", trav->info);
        trav = trav->next;
    }
}
         //CASE 1,2
struct link *delatbeg(struct link *first, int loc)
{
    struct link *p = first;
    struct link *q = first->next;
    struct link *temp;

    if (loc == 0)
    {
        temp = first;
        first = first->next;
        free(temp);

        return first;
    }
    int count;
    count = 1;
    while (count < loc - 1)
    {
        p = p->next;
        q = q->next;
        count++;
    }
    p->next = q->next;
    free(q);

    return (first);
}
                  //CASE 3
struct link *del_val(struct link *first, int value)
{
    struct link *p = first;
    struct link *q = first->next;

    while (q->info != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->info == value)
    {
        p->next = q->next;
        free(q);
    }

    return (first);
}
int main()
{
    struct link *first;
    struct link *second;
    struct link *third;
    struct link *fourth;

    first = (struct link *)malloc(sizeof(struct link));
    second = (struct link *)malloc(sizeof(struct link));
    third = (struct link *)malloc(sizeof(struct link));
    fourth = (struct link *)malloc(sizeof(struct link));

    // CREATION OF A LINKED LIST
    first->info = 11;
    first->next = second;

    second->info = 22;
    second->next = third;

    third->info = 33;
    third->next = fourth;

    fourth->info = 44;
    fourth->next = NULL;

    int loc, item;
    printf("LINKED LIST BEFORE DELETION:\n");
    traversi(first);
    // CASE 1,2,3
    printf("Enter the location of item to be deleted:\n");
    scanf("%d", &loc);

    first = delatbeg(first, loc);
    traversi(first);
    // CASE 4
    printf("Enter the item to be deleted:\n");
    scanf("%d", &item);
    first = del_val(first, item);
    traversi(first);

    return 0;
}