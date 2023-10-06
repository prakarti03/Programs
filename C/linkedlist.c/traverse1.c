#include<stdio.h>
#include<stdlib.h>

struct node 
{
  int info;
  struct node *next;
};
void create(int n)
{
     struct node *s1,*s3;
     int i,num;
     s1 = (struct node *)malloc(sizeof(struct node));
     //s2 = (struct node *)malloc(sizeof(struct node));
     s3 = (struct node *)malloc(sizeof(struct node));
     for(i=1;i<=n;i++)
     {
        printf("enter info of %d node\n",i);
        scanf("%d",&num);
        s1->info = num;
        s1->next = NULL;

        s3->next = s1;
        s3 = s3->next;
       
     }
     s3 = s1;
     while(s3 != NULL)
     {
        printf("ELEMENT: %d",s3->info);
        s3 = s3 -> next;
     }
}
int main(){
   
    int n;
    printf("Input no. of nodes:\n");
    scanf("%d",&n);
    create(n);
    
    return 0;
}