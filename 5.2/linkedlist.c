#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void Create_LL(LINKED_LIST* ll) {
    ll->head = NULL;
}

void InsertAtBeg_LL(LINKED_LIST* ll, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = ll->head;
    ll->head = newNode;
}

void InsertAtPos_LL(LINKED_LIST* ll, int pos, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    
    if (pos == 0) {
        newNode->next = ll->head;
        ll->head = newNode;
        return;
    }

    Node* current = ll->head;
    int i;
    for (i = 0; i < pos - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current != NULL) {
        newNode->next = current->next;
        current->next = newNode;
    } else {
        printf("Invalid position. Cannot insert.\n");
        free(newNode);
    }
}

void DeleteAtBeg_LL(LINKED_LIST* ll) {
    if (ll->head != NULL) {
        Node* temp = ll->head;
        ll->head = ll->head->next;
        free(temp);
    } else {
        printf("List is empty. Cannot delete.\n");
    }
}

void DeleteAtPos_LL(LINKED_LIST* ll, int pos) {
    if (pos == 0) {
        DeleteAtBeg_LL(ll);
        return;
    }

    Node* current = ll->head;
    int i;
    for (i = 0; i < pos - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current != NULL && current->next != NULL) {
        Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    } else {
        printf("Invalid position. Cannot delete.\n");
    }
}

void Print_LL(LINKED_LIST ll) {
    if (ll.head == NULL) {
        printf("The linked list is empty.\n");
    } else {
        printf("Linked List: ");
        Node* current = ll.head;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}
