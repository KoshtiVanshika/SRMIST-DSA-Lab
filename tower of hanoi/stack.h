#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct {
    void **data;    
    int size;       
    int capacity;   
    int elementSize; 
} Stack;


Stack *createStack(int capacity, int elementSize);


bool push(Stack *stack, void *element);


bool pop(Stack *stack, void *element);


bool isEmpty(Stack *stack);

bool isFull(Stack *stack);


int getSize(Stack *stack);


void destroyStack(Stack *stack);

#endif 
