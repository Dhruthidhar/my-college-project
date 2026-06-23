#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;//4 bytes
    struct Node *next;//4 bytes
};

struct Node *top = NULL;


// Push operation
void push(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));//memory of new node of 8 bytes created a newNode structure , 

    newNode->data = value; 
    newNode->next = top;

    top = newNode;

    printf("%d pushed into stack\n", value);
}


// Pop operation
void pop()
{
    struct Node *temp;

    if(top == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        temp = top;

        printf("%d popped from stack\n", top->data);

        top = top->next;

        free(temp);
    }
}


// Display operation
void display()
{
    struct Node *temp;

    if(top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        temp = top;

        printf("Stack elements are:\n");

        while(temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}


int main()
{
    int choice, value;

    while(1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}