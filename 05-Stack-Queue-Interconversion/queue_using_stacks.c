#include <stdio.h>

#define MAX 100

int stack1[MAX];
int stack2[MAX];
int top1 = -1;
int top2 = -1;

void enqueue(int x) {
    if (top1 == MAX - 1) {
        printf("Queue overflow\n");
        return;
    }
    stack1[++top1] = x;
}

void dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue underflow\n");
        return;
    }
    if (top2 == -1) {
        while (top1 != -1) {
            stack2[++top2] = stack1[top1--];
        }
    }
    printf("Deleted: %d\n", stack2[top2--]);
}

void peek() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }
    if (top2 == -1) {
        while (top1 != -1) {
            stack2[++top2] = stack1[top1--];
        }
    }
    printf("Front: %d\n", stack2[top2]);
}

void display() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");

    for (int i = top2; i >= 0; i--) {
        printf("%d ", stack2[i]);
    }

    for (int i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    peek();
    dequeue();
    display();

    return 0;
}
