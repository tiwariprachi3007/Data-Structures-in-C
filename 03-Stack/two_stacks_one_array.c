#include<tdio.h>
#define MAX 100
int arr[MAX];

int top1=-1;
int top2=MAX;

void push1(int x){
    if(top1+1==top2)
    printf("stack overflow\n");
else
arr[++top1]=x;
}

push1(10);
push1(20);

void push2(int x){
    if(top1+1==top2)
    printf("Stack Overflow\n");
else
arr[--top2]=x;
}

push2(50);
push2(60);

void pop(){
    if(top==-1)
    printf("Stack is empty\n");
else
printf("Popped from stack1:%d\n",arr[top1--]);
}

void pop2(){
    if(top2==MAX)
    printf("Stack 2 is empty\n");
else
printf("popped from stack 2:%d\n",arr[top++]);
}

