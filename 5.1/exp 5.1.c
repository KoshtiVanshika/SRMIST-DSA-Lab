#include <stdio.h>
#include "arraylist.h"

int main() {
    arrayL al;

    // Create an empty array-based list
    Create_AL(&al);

    // Insert elements at the beginning
    InsertAtBeg_AL(&al, 10);
    InsertAtBeg_AL(&al, 20);
    InsertAtBeg_AL(&al, 30);

    // Print the list
    printf("List after insertions:\n");
    Print_AL(al);

    // Insert an element at a specific position
    InsertAtPos_AL(&al, 1, 15);

    // Print the list
    printf("List after inserting 15 at position 1:\n");
    Print_AL(al);

    // Delete an element at the beginning
    DeleteAtBeg_AL(&al);

    // Print the list
    printf("List after deleting the first element:\n");
    Print_AL(al);

    // Delete an element at a specific position
    DeleteAtPos_AL(&al, 2);

    // Print the list
    printf("List after deleting element at position 2:\n");
    Print_AL(al);

    return 0;
}
