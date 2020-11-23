// A toy example of linked linst
#include<stdio.h>
#include<stdlib.h>

// Declare a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Helper function to traverse a given linked list
void printList(struct Node *n){
    while (n != NULL)
    {
        printf("node data: %d \n", n->data);
        n = n->next;
    }
}

// Create a simple linled list with 3 nodes
int main(void){
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // insert data and concatenate them
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // print linked list
    printList(head);

    return 0;
}