#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    
    printf("Linked List: ");
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Create nodes
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);
    
    // Connect nodes
    head->next = second;
    second->next = third;
    
    // Print the linked list
    printList(head);
    
    // Insert a new node at the beginning
    struct Node* newHead = createNode(5);
    newHead->next = head;
    head = newHead;
    
    // Print the updated linked list
    printList(head);
    
    // Free allocated memory
    struct Node* current = head;
    struct Node* next;
    
    while(current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    
    return 0;
}
// This code demonstrates the use of linked lists in C by defining a structure for a node, creating nodes, and linking them together.
// It also includes functions to create nodes and print the linked list.