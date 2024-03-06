//preord tree build and traverse using recursive method in linked list
#include<stdio.h>
#include"1node.h"
#include<stdlib.h>

node *buildtree()
{
  int element;
  printf("Enter element and (-1 for no node):\n");
  scanf("%d",&element);
  if(element == -1)
  {
    return NULL;
  }
  node *root = (node*)malloc(sizeof(node));
  root->info = element;
  printf("\nENTER THE LEFT ELEMENT OF %d.\n",element);
  root->left = buildtree();
  printf("\nENTER THE RIGHT ELEMENT OF %d.\n",element);
  root->right = buildtree();

  return root;
}
void preorder(node *root)
{
  if(root == NULL)
  {
    return ;
  }
  else
  {
    printf(" %d ",root->info);
    preorder(root->left);
    preorder(root->right);
  }
}
void inorder(node *root)
{
  if(root == NULL)
  {
    return;
  }
  else
  {
    inorder(root->left);
    printf(" %d ",root->info);
    inorder(root->right);
  }
}
void postorder(node *root)
{
  if(root == NULL)
  {
    return;
  }
  else
  {
    postorder(root->left);
    postorder(root->right);
    printf(" %d ",root->info);
  }
}
int main(){
    node *roots = buildtree();
    preorder(roots);
    inorder(roots);
    postorder(roots);
    return 0;
}