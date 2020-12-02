/**
 * @file Traversal.c
 * @author france5289 (st980407@gmail.com)
 * @brief A toy example of tree traversal
 * @version 0.1
 * @date 2020-12-02
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

/* newNode() allocates a new node with the given data abd NULL left and right pointers.
*/
struct Node *newNode(int data)
{
    // allocate heap memory for new node.
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    // assign data to new node.
    node->data = data;

    // set left and right pointer to be NULL.
    node->left = NULL;
    node->right = NULL;

    // return node pointer
    return node;
}

/**
 * @brief Inorder traversal with recursion.
 * Given a root pointer then print every node data with inorder manner.
 * Inorder : Left->Root->Right.
 * @param root
 */
void InorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // Traverse left child.
    InorderTraversal(root->left);
    // Print node data.
    printf("%d ", root->data);
    // Traverse right child.
    InorderTraversal(root->right);

    return;
}

/**
 * @brief Postorder traversal with recursion.
 * Given a root pointer then print every node data with postorder manner.
 * Postorder : Left->Right->Root
 * @param root
 */
void PostorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // Traverse left child.
    PostorderTraversal(root->left);
    // Traverse right child.
    PostorderTraversal(root->right);
    // Print node data.
    printf("%d ", root->data);

    return;
}

/**
 * @brief Preorder traversal with recursion.
 * Given a root pointer then print every node data with preorder manner.
 * Preorder : Root->Left->Right
 * @param root
 */
void PreorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // Print node data.
    printf("%d ", root->data);
    // Traverse left child.
    PreorderTraversal(root->left);
    // Traverse right child.
    PreorderTraversal(root->right);

    return;
}


int main(void)
{
    // Create a binary tree.
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    // Inorder traversal.
    printf("Inorder traversal \n");
    InorderTraversal(root);

    printf("\n");

    // Preorder traversal.
    printf("Preorder traversal \n");
    PreorderTraversal(root);

    printf("\n");

    // Postorder traversal.
    printf("Postorder traversal \n");
    PostorderTraversal(root);

    return 0;
}