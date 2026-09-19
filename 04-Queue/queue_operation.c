#include<stdio.h>

#define MAX 100
int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int x){
    if(rear==MAX-1){
        printf("Queue overflow\n");
    }
    else{
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1||front>rear){
        printf("Queue underflow\n");
    }
    else{
        printf("deleted :%d\n",queue[front]);
        front++;
    }
}

void isEmpty(){
    if(front==-1||front>rear){
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
}

void size(){
    if(front==-1||front>rear)
        printf("size=0\n");
    else
        printf("size =%d\n",rear-front+1);
}

void print(){
    if(front==-1||front>rear){
        printf("queue is empty\n");
        return;
    }
    for(int i=front;i<=rear;i++)
        printf("%d ",queue[i]);
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("queue: ");
    print();
    size();
    dequeue();
    printf("after dequeue: ");
    print();

    isEmpty();
    return 0;
}
