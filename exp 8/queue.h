#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>


typedef struct {
    void **data;
    int front, rear;
    int size;       
    int capacity;  
} Queue;


Queue *createQueue(int capacity);


bool isEmpty(Queue *queue);


bool isFull(Queue *queue);


bool enqueue(Queue *queue, void *element);


void *dequeue(Queue *queue);


void *front(Queue *queue);


void *rear(Queue *queue);


void destroyQueue(Queue *queue);

#endif 