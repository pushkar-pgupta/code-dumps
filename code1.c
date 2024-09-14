#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
char infix[MAX], postfix[MAX];
int top = -1;

int space(char c) {
    return (c == ' ' || c == '\t');
}

int isEmpty() {
    return (top == -1);
}

int isFull() {
    return (top == MAX - 1);
}

void push(char x) {
    if (isFull()) {
        exit(1);
    } else {
        stack[++top] = x;
    }
}

char pop() {
    if (isEmpty()) {
        exit(1);
    } else {
        return stack[top--];
    }
}

int precedence(char symbol) {
    switch (symbol) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

void inTopost() {
    int j = 0;
    char symbol, next;
    int length = strlen(infix);
    
    for (int i = 0; i < length; i++) {
        symbol = infix[i];
        if (!space(symbol)) {
            switch (symbol) {
                case '(':
                    push(symbol);
                    break;
                case ')':
                    while (!isEmpty() && (next = pop()) != '(') {
                        postfix[j++] = next;
                    }
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while (!isEmpty() && precedence(stack[top]) >= precedence(symbol)) {
                        postfix[j++] = pop();
                    }
                    push(symbol);
                    break;
                default:
                postfix[j++]=symbol;
                break;
            }
        }
    }

    while(!isEmpty())
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
}
int main()
{
    if(fgets(infix,MAX,stdin) != NULL)
    {
        infix[strcspn(infix,"\n")]= '\0';
        inTopost();
        printf("%s\n",postfix);
    }
    else{
        exit(0);
    }
    return 0;
}