/**
 * @file reverse.c
 * @author france5289 (st980407@gmail.com)
 * @brief A toy example of reverse linked list.
 * @version 0.1
 * @date 2020-11-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* Given a reference (pointer to pointer) to the head of a list
and an int,  inserts a new node on the front of the list. */
void push( struct Node **head_ref, int newdata ){
    // insert new node to begin of linked list
    // here we need pointer to pointer of head node to modify the 'real' head pointer
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newdata;
    newNode->next = *(head_ref);
    *(head_ref) = newNode;
}

/* Given a node prev_node, insert a new node after the given
prev_node */
void insertAfter( struct Node *prev_node, int newdata ){
    // insert new node after given node
    // 1. check given node is NULL or not
    if (prev_node == NULL){
        printf("Warring! You can't pass in a NULL Node pointer");
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newdata;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}


/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end  */
void append( struct Node **head_ref, int newdata ){
    /*1. Allocate new node */
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    /*2. insert data to new node */
    newnode->data = newdata;

    /*3. hence newnode is the last node of linked list, so its next should point to NULL*/
    newnode->next = NULL;

    /*4. if linked list is empty, then new node is the head*/
    if (*head_ref == NULL){
        *head_ref = newnode;
        return;
    }

    /*5. linked list is not empty, so we have to traverse to the end then append new node*/
    struct Node *last = NULL; // use a temporay pointer to traverse to prevent modifying original head
    last = *head_ref;

    while (last->next != NULL){
        last = last->next;
    }

    last->next = newnode;
    return;
}

/* Given a linked list and reverse it.
*/
void reverse(struct Node **head_ref){
    /* 1. initialize three pointer : current, next , prev. */
    struct Node *current = NULL;
    struct Node *prev = NULL;
    struct Node *next = NULL;

    /* 2. let current point to head reference */
    current = *head_ref;

    /*3. iterative reverse */
    while(current != NULL){
        // Store pointer of next node.
        next = current->next;

        // Reverse current node's pointer.
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }

    /*4. assign new head reference */
    *head_ref = prev;
}


/* Print given linked list.
*/
void printList(struct Node *node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main(void){
    int len = 0;
    printf("Enter length of linked list: ");
    scanf("%d", &len);
    struct Node *head = NULL;
    // Create linked list first.
    for(int i = 1 ; i <= len ; i++){
        append(&head, i);
    }

    // Check linked list.
    printList(head);

    // format stdout.
    printf("\n");

    // reverse linked list.
    reverse(&head);

    // Check result
    printList(head);

    return 0;
}