#include<stdio.h>

#define MAX 100

int main(){
    char str[MAX];
    int stack[MAX];
    int top=-1;
    int maxLength=0;

    printf("enter parantheses string:");
    scanf("%s",str);
    stack[++top]=-1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='('){
            stack[++top]=i;
        }
        else{
            top--;
            if(top==-1){
                stack[++top]=i;
            }
            else{
                int length=i-stack[top];
                if(length>maxLength)
                maxLength=length;
            }
        }
    }
    printf("Length of longest valid paranthese:%d",maxLength);
    return 0;
}