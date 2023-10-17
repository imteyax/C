// write a program to implement stack using linked list ?
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL; // Initialize the top of the stack

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Stack is full.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed onto the stack\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    struct Node* temp = top;
    top = top->next;
    printf("%d popped from the stack\n", temp->data);
    free(temp);
}

// Function to check if the stack is empty
int isEmpty() {
    return (top == NULL);
}

// Function to display the elements in the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* current = top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("1. Push\n2. Pop\n3. Is Empty\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}