#include<stdio.h>

#define MAX 100
int stack[MAX];
int top = -1;

// push
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = x;
    }
}

// pop
void pop() {
    if (top == -1) {
        printf("stack underflow\n");
    } else {
        printf("popped:%d\n", stack[top--]);
    }
}

// isempty
void isEmpty() {
    if (top == -1) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
}

// size
void size() {
    printf("size=%d\n", top + 1);
}

// display
void display() {
    if (top == -1) {
        printf("stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d", stack[i]);
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("stack:\n");
    display();

    pop();
    pop();

    printf("stack after pop:\n");
    display();

    isEmpty();
    size();
    
    return 0;
}
