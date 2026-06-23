#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the stack
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void push(struct Node** top, int value);
int pop(struct Node** top);
int peek(struct Node* top);
int isEmpty(struct Node* top);
void display(struct Node* top);
void freeStack(struct Node** top);

int main() {
    struct Node* top = NULL;
    int choice, value;

    printf("=========================================\n");
    printf("   Stack Implementation using Linked List \n");
    printf("=========================================\n");

    while (1) {
        printf("\n--- Stack Operations Menu ---\n");
        printf("1. Push (Insert element)\n");
        printf("2. Pop (Remove element)\n");
        printf("3. Peek (View top element)\n");
        printf("4. Check if Empty\n");
        printf("5. Display Stack\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input. Please enter an integer.\n");
                    while (getchar() != '\n');
                    break;
                }
                push(&top, value);
                break;
            case 2:
                if (isEmpty(top)) {
                    printf("Stack Underflow! Stack is empty.\n");
                } else {
                    value = pop(&top);
                    printf("Successfully popped %d from the stack.\n", value);
                }
                break;
            case 3:
                if (isEmpty(top)) {
                    printf("Stack is empty. No top element.\n");
                } else {
                    printf("Top element is: %d\n", peek(top));
                }
                break;
            case 4:
                if (isEmpty(top)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;
            case 5:
                display(top);
                break;
            case 6:
                printf("Freeing memory and exiting...\n");
                freeStack(&top);
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select between 1 and 6.\n");
        }
    }
    return 0;
}

// Push an element onto the stack
void push(struct Node** top, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow! Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack.\n", value);
}

// Pop an element from the stack
int pop(struct Node** top) {
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

// Return the top element of the stack without removing it
int peek(struct Node* top) {
    return top->data;
}

// Check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Display all elements in the stack
void display(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements (Top to Bottom):\n");
    while (temp != NULL) {
        printf("| %-5d |\n", temp->data);
        printf("---------\n");
        temp = temp->next;
    }
}

// Free all memory allocated for the stack
void freeStack(struct Node** top) {
    struct Node* temp;
    while (*top != NULL) {
        temp = *top;
        *top = (*top)->next;
        free(temp);
    }
}
