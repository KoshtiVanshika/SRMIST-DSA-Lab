#include <stdio.h>
#include "doublylinkedlist.h"

int main() {
    DOUBLY_LINKED_LIST dll;

    // Create an empty doubly linked list
    Create_DLL(&dll);

    // Insert elements at the beginning
    InsertAtBeg_DLL(&dll, 10);
    InsertAtBeg_DLL(&dll, 20);
    InsertAtBeg_DLL(&dll, 30);

    // Print the doubly linked list
    printf("Doubly linked list after insertions at the beginning:\n");
    Print_DLL(dll);

    // Insert elements at the end
    InsertAtEnd_DLL(&dll, 40);
    InsertAtEnd_DLL(&dll, 50);

    // Print the doubly linked list
    printf("Doubly linked list after insertions at the end:\n");
    Print_DLL(dll);

    // Insert an element at a specific position
    InsertAtPos_DLL(&dll, 2, 15);

    // Print the doubly linked list
    printf("Doubly linked list after inserting 15 at position 2:\n");
    Print_DLL(dll);

    // Delete an element at the beginning
    DeleteAtBeg_DLL(&dll);

    // Print the doubly linked list
    printf("Doubly linked list after deleting the first element:\n");
    Print_DLL(dll);

    // Delete an element at the end
    DeleteAtEnd_DLL(&dll);

    // Print the doubly linked list
    printf("Doubly linked list after deleting the last element:\n");
    Print_DLL(dll);

    // Delete an element at a specific position
    DeleteAtPos_DLL(&dll, 2);

    // Print the doubly linked list
    printf("Doubly linked list after deleting element at position 2:\n");
    Print_DLL(dll);

    return 0;
}
