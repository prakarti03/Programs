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
void search(struct link *s, int item)
{
    int loc = 0;
    while (s != NULL)
    {
        // if (s->info == item)
        //    {
        //     printf("%d found at %d position.", item, loc+1);
        //     break;
        //    }
        // else
        //     {
        //         loc = loc + 1;
        //         s = s->next;
        //     }
        /// in sorted list
        if ((s->info) > item)
        {
            // loc = NULL;
            printf("ELEMENT NOT FOUND.");
            break;
        }
        else if (s->info == item)
        {
            printf("%d found at %d position.\n", item, loc + 1);
            break;
        }
        else if ((s->info) < item)
        {
            loc = loc + 1;
            s = s->next;
        }
    }
    printf("location = %d", loc);
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

    traversi(first);
    search(first, 22);

    return 0;
}