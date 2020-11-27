/* An example to show how to insert a Node to linked list
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

// This function prints contents of linked list starting from head
void printList(struct Node *node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

/* Driver program to test above functions*/
int main(void) {
    /* Start with the empty list */
    struct Node* head = NULL;

    // Insert 6.  So linked list becomes 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning. So linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);

    printf("\n Created Linked list is: ");
    printList(head);

    return 0;
}

