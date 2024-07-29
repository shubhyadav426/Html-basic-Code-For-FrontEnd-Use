#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10

struct Stack
{
    int items[STACK_SIZE];
    int top;
};
typedef struct Stack st;

void createEmptyStack(st *s)
{
    s->top = -1;
}

int isFull(st *s)
{
    if (s->top == STACK_SIZE - 1)
        return 1;
    else
        return 0;
}

void pushElement(st *s, int newitem)
{
    if (isFull(s))
    {
        printf("STACK FULL");
    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
}

int isEmpty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

int main()
{

    return 0;
}