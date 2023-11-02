#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

// Define the DOUBLY_LINKED_LIST data type for a single node in the doubly linked list
typedef struct DoublyNode {
    int data;
    struct DoublyNode* prev;
    struct DoublyNode* next;
} DoublyNode;

// Define the DOUBLY_LINKED_LIST data type for the doubly linked list itself
typedef struct {
    DoublyNode* head;
    DoublyNode* tail;
} DOUBLY_LINKED_LIST;

// Function to create an empty doubly linked list
void Create_DLL(DOUBLY_LINKED_LIST* dll);

// Function to insert an element at the beginning of the doubly linked list
void InsertAtBeg_DLL(DOUBLY_LINKED_LIST* dll, int data);

// Function to insert an element at the end of the doubly linked list
void InsertAtEnd_DLL(DOUBLY_LINKED_LIST* dll, int data);

// Function to insert an element at a specified position in the doubly linked list
void InsertAtPos_DLL(DOUBLY_LINKED_LIST* dll, int pos, int data);

// Function to delete the element at the beginning of the doubly linked list
void DeleteAtBeg_DLL(DOUBLY_LINKED_LIST* dll);

// Function to delete the element at the end of the doubly linked list
void DeleteAtEnd_DLL(DOUBLY_LINKED_LIST* dll);

// Function to delete an element at a specified position in the doubly linked list
void DeleteAtPos_DLL(DOUBLY_LINKED_LIST* dll, int pos);

// Function to print the contents of the doubly linked list
void Print_DLL(DOUBLY_LINKED_LIST dll);

#endif
