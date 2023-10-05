#include <stdio.h>
#include "queue.h"

int main() {
    
    Queue *intQueue = createQueue(10);

    
    int x = 10, y = 20, z = 30;
    enqueue(intQueue, &x);
    enqueue(intQueue, &y);
    enqueue(intQueue, &z);

    
    while (!isEmpty(intQueue)) {
        int *element = (int *)dequeue(intQueue);
        if (element) {
            printf("%d ", *element);
        }
    }
    printf("\n");

    
    destroyQueue(intQueue);

    return 0;
}
