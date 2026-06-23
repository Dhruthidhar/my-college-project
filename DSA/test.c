#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

int isEmpty() { return (top == -1); }

int isFull() { return (top == MAX_SIZE - 1); }

void push(int value) {
  if (isFull()) {
    printf("Stack Overflow! Cannot push %d onto a full stack.\n", value);
    return;
  }
  stack[++top] = value;
  printf("Successfully pushed %d onto the stack.\n", value);
}

int pop() {
  if (isEmpty()) {
    printf("Stack Underflow! Cannot pop from an empty stack.\n");
    return -1;
  }
  return stack[top--];
}
int peek() {
  if (isEmpty()) {
    printf("Stack is empty! No top element to peek.\n");
    return -1;
  }
  return stack[top];
}

void display() {
  if (isEmpty()) {
    printf("Stack is empty!\n");
    return;
  }
  printf("Stack elements (Top to Bottom): ");
  for (int i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main() {
  int choice;
  int value;

  printf("=========================================\n");
  printf("    Stack Implementation (Array-Based)   \n");
  printf("=========================================\n");

  while (1) {
    printf("\n--- Stack Operations Menu ---\n");
    printf("1. Push (Insert)\n");
    printf("2. Pop (Remove)\n");
    printf("3. Peek (View top)\n");
    printf("4. Display Stack\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
      printf("Invalid input. Please enter a valid menu number.\n");
      // Clear input buffer
      while (getchar() != '\n')
        ;
      continue;
    }

    switch (choice) {
    case 1:
      printf("Enter the value to push: ");
      if (scanf("%d", &value) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        while (getchar() != '\n')
          ;
        break;
      }
      push(value);
      break;
    case 2:
      value = pop();
      if (value != -1) {
        printf("Popped value: %d\n", value);
      }
      break;
    case 3:
      value = peek();
      if (value != -1) {
        printf("Top value: %d\n", value);
      }
      break;
    case 4:
      display();
      break;
    case 5:
      printf("Exiting program. Goodbye!\n");
      exit(0);
    default:
      printf("Invalid choice. Please select a number between 1 and 5.\n");
    }
  }
  return 0;
}