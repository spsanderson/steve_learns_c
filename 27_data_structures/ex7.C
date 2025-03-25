#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Initialize queue
void initializeQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Check if queue is full
int isFull(struct Queue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

// Check if queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

// Add an element to the queue
void enqueue(struct Queue* queue, int value) {
    if(isFull(queue)) {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }
    
    if(isEmpty(queue)) {
        queue->front = 0;
    }
    
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->items[queue->rear] = value;
    printf("%d enqueued to queue\n", value);
}

// Remove an element from the queue
int dequeue(struct Queue* queue) {
    int item;
    
    if(isEmpty(queue)) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;
    }
    
    item = queue->items[queue->front];
    
    if(queue->front == queue->rear) {
        // Last element in queue
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    
    return item;
}

// Display all elements in the queue
void display(struct Queue* queue) {
    int i;
    
    if(isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue elements: ");
    i = queue->front;
    
    if(queue->front <= queue->rear) {
        while(i <= queue->rear) {
            printf("%d ", queue->items[i]);
            i++;
        }
    } else {
        while(i < MAX_SIZE) {
            printf("%d ", queue->items[i]);
            i++;
        }
        i = 0;
        while(i <= queue->rear) {
            printf("%d ", queue->items[i]);
            i++;
        }
    }
    printf("\n");
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);
    
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    
    display(&queue);
    
    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));
    
    display(&queue);
    
    enqueue(&queue, 40);
    enqueue(&queue, 50);
    enqueue(&queue, 60);
    
    // Queue should be full now
    enqueue(&queue, 70);
    
    display(&queue);
    
    return 0;
}
