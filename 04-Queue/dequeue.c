#include <stdio.h>

#define MAX 5

int deque[MAX];
int front = -1;
int rear = -1;

int isEmpty() {
    return (front == -1);
}

int sFull() {
    return ((front == 0 && rear == MAX - 1) || front == rear + 1);
}

void insertFront(int x) {
    if (sFull()) {
        printf("Deque is Full\n");
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    }
    else if (front == 0) {
        front = MAX - 1;
    }
    else {
        front--;
    }

    deque[front] = x;
}

void insertEnd(int x) {
    if (sFull()) {
        printf("Deque is Full\n");
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    }
    else if (rear == MAX - 1) {
        rear = 0;
    }
    else {
        rear++;
    }

    deque[rear] = x;
}

void deleteFront() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[front]);

    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1) {
        front = 0;
    }
    else {
        front++;
    }
}

void deleteEnd() {
    if (isEmpty()) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deleted: %d\n", deque[rear]);

    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else if (rear == 0) {
        rear = MAX - 1;
    }
    else {
        rear--;
    }
}

void printFront() {
    if (isEmpty())
        printf("Deque is Empty\n");
    else
        printf("Front: %d\n", deque[front]);
}

void printEnd() {
    if (isEmpty())
        printf("Deque is Empty\n");
    else
        printf("Rear: %d\n", deque[rear]);
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertFront(5);

    printFront();
    printEnd();

    deleteFront();
    deleteEnd();

    printFront();
    printEnd();

    return 0;
}