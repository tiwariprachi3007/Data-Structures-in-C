#include<stdio.h>
#include<string.h>
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
    char str[100];
    printf("Enter String:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    // Push characters into stack
    for (int i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    // Pop characters to reverse string
    printf("Reversed string: ");

    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}