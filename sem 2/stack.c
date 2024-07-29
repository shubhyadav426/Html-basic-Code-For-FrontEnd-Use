#include <stdio.h>
#include <stdlib.h>

// Define the stack node structure
struct StackNode
{
    int data;
    struct StackNode *next;
};

// Function to create a new stack node
struct StackNode *createNode(int data)
{
    struct StackNode *newNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    if (!newNode)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to check if the stack is empty
int isEmpty(struct StackNode *root)
{
    return !root;
}

// Function to push an element onto the stack
void push(struct StackNode **root, int data)
{
    struct StackNode *newNode = createNode(data);
    if (newNode == NULL)
        return; // Memory allocation failed
    newNode->next = *root;
    *root = newNode;
    printf("%d pushed onto stack\n", data);
}

// Function to pop an element from the stack
int pop(struct StackNode **root)
{
    if (isEmpty(*root))
    {
        printf("Stack underflow\n");
        return -1;
    }
    struct StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

// Function to peek at the top element of the stack
int peek(struct StackNode *root)
{
    if (isEmpty(root))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return root->data;
}

int main()
{
    struct StackNode *root = NULL; // Initialize an empty stack

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    printf("%d popped from stack\n", pop(&root));
    printf("Top element is %d\n", peek(root));

    return 0;
}
