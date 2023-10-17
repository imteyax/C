// write a program to search an element in linked list at specific position /
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to search for an item at a specific position in the linked list
int searchAtPosition(struct Node* head, int position) {
    if (position < 1) {
        printf("Invalid position\n");
        return -1;
    }

    struct Node* current = head;
    int currentPosition = 1;

    while (current != NULL) {
        if (currentPosition == position) {
            return current->data;
        }
        current = current->next;
        currentPosition++;
    }

    printf("Position not found in the list\n");
    return -1;
}

int main() {
    // Create a sample linked list
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    int position;
    printf("Enter the position to search: ");
    scanf("%d", &position);

    int result = searchAtPosition(head, position);

    if (result != -1) {
        printf("Element found at position %d: %d\n", position, result);
    }

    return 0;
}