//Insertion in BST
#include <stdio.h>
#include <stdlib.h>
#include "1node.h"

//ACCEPTS THE OLD ROOT NODE & DATA and RETURNS THE NEW ROOT NODE
node *insertInBst(node *root, int element)
{
    //BEST CASE
    if (root == NULL)
    {
        node *roots = (node *)malloc(sizeof(node));
        roots->info = element;
        roots->left = roots->right = NULL;
        return roots;
    }
    //RECURSION CASE- INSERT IN A SUBTREE AND UPDATE POINTERS
    if (element <= root->info)
    {
        root->left = insertInBst(root->left, element);
    }
    else
    {
        root->right = insertInBst(root->right, element);
    }
    return root;
}
node *build()
{
    //READ A LIST OF NUMBERS TILL -1 AND ALSO THESE NUMBERS WILL BE INSERTED IN BST 
    int element;
    printf("Enter the element you want to insert:\n");
    scanf("%d", &element);
    node *root = NULL;
    while (element != -1)
    {
        root = insertInBst(root, element);
        printf("Enter the element you want to insert:\n");
        scanf("%d", &element);
    }
    return root;
}
node *preorder(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    printf("%d ", root->info);
    preorder(root->left);
    preorder(root->right);
    return root;
}
int main()
{
    node *head;
    head = build();
    head = preorder(head);
    return 0;
}