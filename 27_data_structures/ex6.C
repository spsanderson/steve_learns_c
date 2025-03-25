#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Structure for stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Initialize stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

// Check if stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Check if stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Push an item onto stack
void push(struct Stack* stack, int value) {
    if(isFull(stack)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack->items[++stack->top] = value;
    printf("%d pushed to stack\n", value);
}

// Pop an item from stack
int pop(struct Stack* stack) {
    if(isEmpty(stack)) {
        printf("Stack Underflow! Cannot pop from an empty stack\n");
        return -1;
    }
    return stack->items[stack->top--];
}

// Get the top item without removing it
int peek(struct Stack* stack) {
    if(isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->items[stack->top];
}

// Display stack contents
void display(struct Stack* stack) {
    if(isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack contents: ");
    for(int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initializeStack(&stack);
    
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    display(&stack);
    
    printf("Top element is %d\n", peek(&stack));
    
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    
    display(&stack);
    
    push(&stack, 40);
    push(&stack, 50);
    push(&stack, 60);
    
    // Try to push beyond capacity
    push(&stack, 70);
    
    display(&stack);
    
    return 0;
}
// This code implements a stack data structure using an array in C. It provides functions to initialize the stack, check if it's full or empty, push and pop elements, peek at the top element, and display the stack contents. The main function demonstrates these operations by pushing and popping elements from the stack and displaying its contents at various stages. The stack has a maximum size defined by `MAX_SIZE`, and attempts to push beyond this limit will result in an overflow message.
// The stack is a Last In First Out (LIFO) data structure, meaning the last element added is the first one to be removed.
// This implementation is useful for understanding basic stack operations and memory management in C.