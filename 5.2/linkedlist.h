#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Define the LINKED_LIST data type for a single node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the LINKED_LIST data type for the linked list itself
typedef struct {
    Node* head;
} LINKED_LIST;

// Function to create an empty linked list
void Create_LL(LINKED_LIST* ll);

// Function to insert an element at the beginning of the linked list
void InsertAtBeg_LL(LINKED_LIST* ll, int data);

// Function to insert an element at a specified position in the linked list
void InsertAtPos_LL(LINKED_LIST* ll, int pos, int data);

// Function to delete the element at the beginning of the linked list
void DeleteAtBeg_LL(LINKED_LIST* ll);

// Function to delete an element at a specified position in the linked list
void DeleteAtPos_LL(LINKED_LIST* ll, int pos);

// Function to print the contents of the linked list
void Print_LL(LINKED_LIST ll);

#endif
