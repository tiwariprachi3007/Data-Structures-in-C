#include<stdio.h>
#define MAX 100
int queue[MAX];

int front=0;
int rear=-1;
int size=0;

void push(int x){
    if(size==MAX){
        printf("stack overflow\n");
        return;
    }
    rear=(rear+1)%MAX;
    queue[rear]=x;
    size++;

    //move previous element behind the new element
    for(int i=0;i<size-1;i++){
        int temp = queue[front];
        front=(front+1)%MAX;
        rear=(rear+1)%MAX;
        queue[rear]=temp;
    }
}
void pop(){
    if(size==0){
        printf("stack underflow\n");
        return;
    }
    printf("Popped :%d\n",queue[front]);
    front=(front+1)%MAX;
    size--;
}
void peek(){
    if(size==0){
        printf("stack is empty\n");
        return;
    }
    printf("Top:%d\n",queue[front]);
}
void display(){
    if(size==0){
        printf("stack is empty\n");
        return;
    }
    int index=front;
    for(int i=0;i<size;i++){
        printf("%d ",queue[index]);
        index=(index+1)%MAX;
    }
    printf("\n");

}
int main(){
    push(10);
    push(20);
    push(30);

    printf("Stack:");
    display();

    peek();
    pop();
    printf("After Pop:");
    display();
    return 0;
}
