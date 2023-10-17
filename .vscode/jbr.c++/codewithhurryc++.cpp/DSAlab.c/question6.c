//write a program to implement using array ?
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100


struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack* stack) {
    stack->top = -1;
}

int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}
int isFull(struct Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow: Cannot push %d onto the stack.\n", value);
    } else {
        stack->items[++(stack->top)] = value;
    }
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow: Cannot pop from an empty stack.\n");
        return -1; 
    } else {
        return stack->items[(stack->top)--];
    }
}
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    display(&stack);

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    display(&stack);

    return 0;
}