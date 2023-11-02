#ifndef ARRAYLIST_H
#define ARRAYLIST_H

// Define the maximum number of elements in the array-based list
#define MAX_SIZE 100

// Define the ARRAY_LIST data type
typedef struct {
    int arr[MAX_SIZE];
    int size;
} arrayL;

// Function to create an empty array-based list
void Create_AL(arrayL *al);

// Function to insert an element at the beginning of the list
void InsertAtBeg_AL(arrayL *al, int data);

// Function to insert an element at a specified position in the list
void InsertAtPos_AL(arrayL *al, int pos, int data);

// Function to delete the element at the beginning of the list
void DeleteAtBeg_AL(arrayL *al);

// Function to delete an element at a specified position in the list
void DeleteAtPos_AL(arrayL *al, int pos);

// Function to print the contents of the list
void Print_AL(arrayL al);

#endif
