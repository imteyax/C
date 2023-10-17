//write a program to implement circular queue ?
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int circularQueue[MAX_SIZE];
int front = -1, rear = -1;

int isFull() {
    return (front == (rear + 1) % MAX_SIZE);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d\n", value);
    } else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX_SIZE;
        circularQueue[rear] = value;
        printf("%d enqueued into the circular queue\n", value);
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue\n");
    } else {
        printf("%d dequeued from the circular queue\n", circularQueue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }
}

void display() {
    int i;
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Circular Queue elements: ");
        for (i = front; i != rear; i = (i + 1) % MAX_SIZE) {
            printf("%d ", circularQueue[i]);
        }
        printf("%d\n", circularQueue[i]);  // Print the last element
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Check if Empty\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                if (isEmpty()) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue is not empty\n");
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