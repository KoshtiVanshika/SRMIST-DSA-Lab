#include <stdio.h>
#include "arraylist.h"

void Create_AL(arrayL *al) {
    al->size = 0;
}

void InsertAtBeg_AL(arrayL *al, int data) {
    if (al->size < MAX_SIZE) {
        for (int i = al->size; i > 0; i--) {
            al->arr[i] = al->arr[i - 1];
        }
        al->arr[0] = data;
        al->size++;
    } else {
        printf("List is full. Cannot insert.\n");
    }
}

void InsertAtPos_AL(arrayL *al, int pos, int data) {
    if (pos >= 0 && pos <= al->size && al->size < MAX_SIZE) {
        for (int i = al->size; i > pos; i--) {
            al->arr[i] = al->arr[i - 1];
        }
        al->arr[pos] = data;
        al->size++;
    } else {
        printf("Invalid position or list is full. Cannot insert.\n");
    }
}

void DeleteAtBeg_AL(arrayL *al) {
    if (al->size > 0) {
        for (int i = 0; i < al->size - 1; i++) {
            al->arr[i] = al->arr[i + 1];
        }
        al->size--;
    } else {
        printf("List is empty. Cannot delete.\n");
    }
}

void DeleteAtPos_AL(arrayL *al, int pos) {
    if (pos >= 0 && pos < al->size) {
        for (int i = pos; i < al->size - 1; i++) {
            al->arr[i] = al->arr[i + 1];
        }
        al->size--;
    } else {
        printf("Invalid position. Cannot delete.\n");
    }
}

void Print_AL(arrayL al) {
    if (al.size == 0) {
        printf("The list is empty.\n");
    } else {
        printf("Array-based List: ");
        for (int i = 0; i < al.size; i++) {
            printf("%d ", al.arr[i]);
        }
        printf("\n");
    }
}
