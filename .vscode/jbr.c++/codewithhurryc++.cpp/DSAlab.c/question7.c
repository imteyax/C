//write a program to implement queue  using array and perform all the basic operations ?
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = value;
        printf("%d enqueued into the queue\n", value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue\n");
    } else {
        printf("%d dequeued from the queue\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

int isEmpty() {
    return (front == -1);
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
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