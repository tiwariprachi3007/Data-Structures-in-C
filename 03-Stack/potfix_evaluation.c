#include<stdio.h>
#define MAX 100

int stack[MAX];
int top=-1;

void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}

int main(){
    char exp[MAX];

    printf("Enter postfix expression:");
    scanf("%s",exp);

    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]>='0' && exp[i]<='9'){
            push(exp[i]-'0');
        }
        else{
            int b=pop();
            int a=pop();

            if(exp[i]=='+')
            push(a+b);
        else if(exp[i]=='-')
        push(a-b);
    else if(exp[i]=='*')
    push(a*b);
else if(exp[i]=='/')
push(a  /b);
        }
    }
    printf("result:%d\n",pop());
    return 0;
}