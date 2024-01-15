
int nextindex = 0;

struct stack
{
    int capacity;
    int arr[4];

} s1;
// return no. of elements present in my stack
void size()
{
    printf("TOTAL ELEMENTS PRESENT IN STACK IS %d\n", nextindex);
}
int isempty()
{
    if (nextindex == 0)
        return 1;
    else
        return 0;
}
// to insert an element
void push(int element)
{
    if (nextindex == s1.capacity)
    {
        printf("Stack full.\n");
        return;
    }
    s1.arr[nextindex] = element;
    nextindex++;
}
// to delete element
int pop()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
        return 1;
    }
    nextindex--;
    printf("%d\n", s1.arr[nextindex]);
}
// to acces the top elements of stack
int top()
{
    if (isempty())
    {
        printf("Stack Empty.\n");
        return 1;
    }
    int top = nextindex;
    while(top != 0){
    printf("%d\n", s1.arr[top - 1]);
    top--;
    }     
}
