//write a program to implement queue using linked list ?
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a queue node
struct QueueNode {
    int data;
    struct QueueNode* next;
};

// Define a structure for the queue itself
struct Queue {
    struct QueueNode* front;
    struct QueueNode* rear;
};

// Function to create an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (!queue) {
        printf("Memory allocation error.\n");
        exit(1);
    }
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return (queue->front == NULL);
}

// Function to enqueue an element
void enqueue(struct Queue* queue, int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    if (!newNode) {
        printf("Memory allocation error.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    printf("%d enqueued into the queue\n", data);
}

// Function to dequeue an element
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    struct QueueNode* temp = queue->front;
    int data = temp->data;
    queue->front = queue->front->next;
    free(temp);

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    printf("%d dequeued from the queue\n", data);
    return data;
}

// Function to display the queue
void display(struct Queue* queue) {
    struct QueueNode* current = queue->front;
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    display(queue);

    dequeue(queue);
    dequeue(queue);

    display(queue);

    enqueue(queue, 40);

    display(queue);

    return 0;
}