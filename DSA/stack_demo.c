#include <stdio.h>
#include <stdlib.h>

// Structure for Linked List Stack Node
struct Node {
    int data;
    struct Node* next;
};

// Global pointer for the top of the stack
struct Node* top = NULL;

// PUSH: Inserts an element at the top of the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow! Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d onto the stack.\n", value);
}

// POP: Removes and returns the top element of the stack
int pop() {
    if (top == NULL) {
        printf("Stack Underflow! Stack is empty.\n");
        return -1; // Return -1 or error indicator
    }
    struct Node* temp = top;
    int poppedValue = temp->data;
    top = top->next;
    free(temp);
    return poppedValue;
}

// Function to print the stack elements
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements (Top to Bottom): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    printf("--- Stack Push & Pop Demonstration ---\n");

    push(10);
    push(20);
    push(30);
    display();

    printf("Popped element: %d\n", pop());
    display();

    printf("Popped element: %d\n", pop());
    display();

    return 0;
}
