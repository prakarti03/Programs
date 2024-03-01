#include <stdio.h>
#include "1node.h"
#include <stdlib.h>

node *ptr,*save,*par,*loc;
node *buildtree()
{
  int element;
  printf("Enter element and (-1 for no node):\n");
  scanf("%d", &element);
  if (element == -1)
  {
    return NULL;
  }
  node *root = (node *)malloc(sizeof(node));
  root->info = element;
  printf("\nENTER THE LEFT ELEMENT OF %d.\n", element);
  root->left = buildtree();
  printf("\nENTER THE RIGHT ELEMENT OF %d.\n", element);
  root->right = buildtree();

  return root;
}
node *search(int element, node *root)
{

  if (root == NULL)
  {
    loc = NULL;
    par = NULL;
    return 0;
  }
  if (element == root->info)
  {
    loc = root;
    par = NULL;
    return 0;
  }
  if (element < root->info)
  {
    ptr = root->left;
    save = root;
  }
  else
  {
    ptr = root->right;
    save = root;
  }
  while (ptr != NULL)
  {
    if (element = ptr->info)
    {
      loc = ptr;
      par = save;
    }
    if (element < ptr->info)
    {
      save = ptr;
      ptr = ptr->left;
    }
    else
    {
      save = ptr;
      ptr = ptr->right;
    }
  }
  if(ptr == NULL )
  {
    loc = NULL;
    par = save;
  }
}

int main()
{
  int element;
  node *root = buildtree();
  printf("Enter the element you want to search:\n"); 
  scanf("%d", &element);
  search(element, root);
  printf("The parent of element is %d.\n",par->info);
  printf("The loc element is %d",loc->info);
  printf("The loc is %d",loc);
  return 0;
}