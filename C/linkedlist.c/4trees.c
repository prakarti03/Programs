//DELETION IN A TREE
#include<stdio.h>
#include<stdlib.h>
#include"1node.h"

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

node *deleteInBst(node *root,int element)
{   //if root is null  
    if (root == NULL)
    {
        return NULL;
    }
    else if(element < root -> info )
    {
      root->left= deleteInBst(root->left,element);
      return root;
    }
    else if(element == root->info)
    {
        //if found 3 cases
        //1. 0 child
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        //2. 1 child left child
        else if(root->left !=NULL && root->right == NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }
        //2. 1 child right child
        else if(root->left ==NULL && root->right != NULL)
        {
            node* temp = root->right;
            free(root);
            return temp;
        }
        //3. 2 children
        node *replace = root->right;

        while(replace->left != NULL)
        {
            replace = replace->left;
        }
        root->info = replace->info;
        root->right = deleteInBst(root->right,replace->info);
        return root;
    }
    else
    {
      root->right = deleteInBst(root->right,element);
      return root;
    }
    
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
int main(){
    int element;
    node *root = buildtree();
    //preorder(root);
    printf("Enter the element you want to delete.\n");
    scanf("%d",&element);
    deleteInBst(root,element);
    preorder (root);
    return 0;
}