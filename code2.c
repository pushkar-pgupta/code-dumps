#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

typedef struct
{
    int top;
    int items[MAX];

}
Stack;
void initStack(Stack *s)
{
    s->top =-1;
}
void push(Stack *s,int item)
{
    if(s->top==(MAX -1))
    {
        printf("Stack is full\n");
    return;

    }
s->items[++(s->top)]=item;
}

int pop(Stack *s){
    if(s->top==-1)
    {
        printf("Stack is empty\n");
        exit(1);

    }
    return s->items[(s->top)--];
}
int evaluatePostfix(char *exp)
{
    Stack s;
    initStack(&s);
    char *p=exp;
    while(*p)
    
    {
        if(isdigit(*p))
        {
            push(&s,*p-'0');
        }
        else if (*p=='+' || *p=='-' || *p=='*' || *p=='/')
        {
            int b=pop(&s);
            int a=pop(&s);
        switch(*p)
        {
            case '+': push(&s,a+b); break;
            case '-': push(&s,a-b); break;
            case '*': push(&s,a*b); break;
            case '/': push(&s,a/b); break;
        }
    }
    p++;
}
return pop(&s);
}
int main()
{
    char exp[MAX];
    scanf("%s",exp);
    int result = evaluatePostfix(exp);
    printf("%d\n",result);
    return 0;
}