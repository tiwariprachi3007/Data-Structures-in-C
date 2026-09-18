#include<stdio.h>

#define MAX 100
char stack[MAX];
int top=-1;

void push(char ch){
    stack[++top]=ch;

}
char pop(){
    return stack[top--];
}
int main(){
    char exp[100];
    printf("enter expression:");
    scanf("%s",exp);

    for(int i=0;exp[i]!='\0';i++){
        //opening brackets

        if(exp[i]=='('|| exp[i]=='['||exp[i]=='{'){
            push(exp[i]);
        }

        //closing brackets
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}'){
            if(top == -1){
                printf("Not balanced\n");
                return 0;
            }
            char popped = pop();
            if((exp[i] == ')' && popped != '(') ||
               (exp[i] == ']' && popped != '[') ||
               (exp[i] == '}' && popped != '{')) {
                printf("Not balanced\n");
                return 0;
            }
        }
    }

    if(top == -1){
        printf("Balanced\n");
    } else {
        printf("Not balanced\n");
    }
    return 0;
}