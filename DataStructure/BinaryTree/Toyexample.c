/**
 * @file Toyexample.c
 * @author france5289 (st980407@gmail.com)
 * @brief A toy example of binary tree
 * @version 0.1
 * @date 2020-12-02
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left ;
    struct Node *right ;
};

/* newNode() allocates a new node with the given data abd NULL left and right pointers.
*/
struct Node* newNode(int data){
    // allocate heap memory for new node.
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));

    // assign data to new node.
    node->data = data;

    // set left and right pointer to be NULL.
    node->left = NULL;
    node->right = NULL;

    // return node pointer
    return node;
}

int main(void){
    /*create root*/
    struct Node *root = newNode(1);
    /* following is the tree after above statement

    	 1
    	/ \
    	NULL NULL
    */


    root->left	 = newNode(2);
    root->right	 = newNode(3);
    /* 2 and 3 become left and right children of 1
    	     1
    	  /     \
    	 2	     3
    	/ \     / \
    NULL NULL NULL NULL
    */


    root->left->left = newNode(4);
    /* 4 becomes left child of 2
    	   1
    	/	 \
    	2	  3
    	/ \	 / \ 
    4 NULL NULL NULL 
    / \
    NULL NULL
    */

    return 0;
}
