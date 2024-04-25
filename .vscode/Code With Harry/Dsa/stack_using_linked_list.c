#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1; // Stack is empty
    }
    else
    {
        return 0; // Stack is not empty
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1; // Stack is full
    }
    else
    {
        free(p);  // Free the allocated memory
        return 0; // Stack is not full
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow\n");
        return -1; // Return a sentinel value to indicate underflow
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *top = NULL; // Initialize an empty stack
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);

    printf("Stack elements:\n");
    linkedListTraversal(top);

    printf("Popping an element: %d\n", pop(&top));
    printf("Popping an element: %d\n", pop(&top));
    printf("Popping an element: %d\n", pop(&top));
    printf("Popping an element: %d\n", pop(&top)); // Should result in underflow

    return 0;
}
