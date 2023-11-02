#include <stdio.h>
#include "linkedlist.h"

int main() {
    LINKED_LIST ll;

    // Create an empty linked list
    Create_LL(&ll);

    // Insert elements at the beginning
    InsertAtBeg_LL(&ll, 10);
    InsertAtBeg_LL(&ll, 20);
    InsertAtBeg_LL(&ll, 30);

    // Print the linked list
    printf("Linked list after insertions:\n");
    Print_LL(ll);

    // Insert an element at a specific position
    InsertAtPos_LL(&ll, 1, 15);

    // Print the linked list
    printf("Linked list after inserting 15 at position 1:\n");
    Print_LL(ll);

    // Delete an element at the beginning
    DeleteAtBeg_LL(&ll);

    // Print the linked list
    printf("Linked list after deleting the first element:\n");
    Print_LL(ll);

    // Delete an element at a specific position
    DeleteAtPos_LL(&ll, 2);

    // Print the linked list
    printf("Linked list after deleting element at position 2:\n");
    Print_LL(ll);

    return 0;
}
