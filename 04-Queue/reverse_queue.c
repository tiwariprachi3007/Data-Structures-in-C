#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int stack[MAX];
int top = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = x;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }

    front++;
}

void reverseQueue() {
    while (front != -1 && front <= rear) {
        stack[++top] = queue[front];
        front++;
    }

    front = 0;
    rear = -1;

    while (top != -1) {
        queue[++rear] = stack[top--];
    }
}

void printQueue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    printf("Original Queue: ");
    printQueue();

    reverseQueue();

    printf("Reversed Queue: ");
    printQueue();

    return 0;
}