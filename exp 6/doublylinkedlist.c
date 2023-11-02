#include <stdio.h>
#include <stdlib.h>
#include "doublylinkedlist.h"

void Create_DLL(DOUBLY_LINKED_LIST* dll) {
    dll->head = NULL;
    dll->tail = NULL;
}

void InsertAtBeg_DLL(DOUBLY_LINKED_LIST* dll, int data) {
    DoublyNode* newNode = (DoublyNode*)malloc(sizeof(DoublyNode));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = dll->head;

    if (dll->head == NULL) {
        dll->tail = newNode;
    } else {
        dll->head->prev = newNode;
    }

    dll->head = newNode;
}

void InsertAtEnd_DLL(DOUBLY_LINKED_LIST* dll, int data) {
    DoublyNode* newNode = (DoublyNode*)malloc(sizeof(DoublyNode));
    newNode->data = data;
    newNode->prev = dll->tail;
    newNode->next = NULL;

    if (dll->tail == NULL) {
        dll->head = newNode;
    } else {
        dll->tail->next = newNode;
    }

    dll->tail = newNode;
}

void InsertAtPos_DLL(DOUBLY_LINKED_LIST* dll, int pos, int data) {
    if (pos <= 0) {
        InsertAtBeg_DLL(dll, data);
        return;
    }

    DoublyNode* current = dll->head;
    int i;
    for (i = 0; i < pos && current != NULL; i++) {
        current = current->next;
    }

    if (current != NULL) {
        DoublyNode* newNode = (DoublyNode*)malloc(sizeof(DoublyNode));
        newNode->data = data;
        newNode->prev = current->prev;
        newNode->next = current;

        if (current->prev != NULL) {
            current->prev->next = newNode;
        } else {
            dll->head = newNode;
        }

        current->prev = newNode;
    } else {
        InsertAtEnd_DLL(dll, data);
    }
}

void DeleteAtBeg_DLL(DOUBLY_LINKED_LIST* dll) {
    if (dll->head != NULL) {
        DoublyNode* temp = dll->head;
        dll->head = dll->head->next;
        if (dll->head != NULL) {
            dll->head->prev = NULL;
        } else {
            dll->tail = NULL;
        }
        free(temp);
    } else {
        printf("List is empty. Cannot delete.\n");
    }
}

void DeleteAtEnd_DLL(DOUBLY_LINKED_LIST* dll) {
    if (dll->tail != NULL) {
        DoublyNode* temp = dll->tail;
        dll->tail = dll->tail->prev;
        if (dll->tail != NULL) {
            dll->tail->next = NULL;
        } else {
            dll->head = NULL;
        }
        free(temp);
    } else {
        printf("List is empty. Cannot delete.\n");
    }
}

void DeleteAtPos_DLL(DOUBLY_LINKED_LIST* dll, int pos) {
    if (pos == 0) {
        DeleteAtBeg_DLL(dll);
        return;
    }

    DoublyNode* current = dll->head;
    int i;
    for (i = 0; i < pos && current != NULL; i++) {
        current = current->next;
    }

    if (current != NULL) {
        if (current->prev != NULL) {
            current->prev->next = current->next;
        } else {
            dll->head = current->next;
        }

        if (current->next != NULL) {
            current->next->prev = current->prev;
        } else {
            dll->tail = current->prev;
        }

        free(current);
    } else {
        printf("Invalid position. Cannot delete.\n");
    }
}

void Print_DLL(DOUBLY_LINKED_LIST dll) {
    if (dll.head == NULL) {
        printf("The doubly linked list is empty.\n");
    } else {
        printf("Doubly Linked List: ");
        DoublyNode* current = dll.head;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}
