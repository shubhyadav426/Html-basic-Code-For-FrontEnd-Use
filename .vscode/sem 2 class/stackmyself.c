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

int isEmpty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}
// push operation
void push(st *s, int newitem)
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

// pop operation
void pop(st *s, int newitem)
{
    if (isEmpty(s))
    {
        printf("STACK EMPTY");
    }
    else
    {
        printf("Items Popped: %d", s->items[s->top]);
        s->top--;
    }
}

// print elements
void printStack(st *s)
{
    if (isEmpty(s))
    {
        printf("STACK EMPTY");
    }
    else
    {
        printf("Stack: ");
        for (int i = 0; i <= s->top; i++)
        {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}

int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    printStack(s);
    pop(s, 4);
    printf("\nAfter popping out\n");
    printStack(s);

    return 0;
}