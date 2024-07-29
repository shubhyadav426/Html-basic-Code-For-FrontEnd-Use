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

// Function to display the stack
void displayStack(struct StackNode *root)
{
    struct StackNode *temp = root;
    if (isEmpty(root))
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct StackNode *root = NULL; // Initialize an empty stack
    int choice, value;

    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&root, value);
            break;
        case 2:
            value = pop(&root);
            if (value != -1)
            {
                printf("%d popped from stack\n", value);
            }
            break;
        case 3:
            value = peek(root);
            if (value != -1)
            {
                printf("Top element is %d\n", value);
            }
            break;
        case 4:
            displayStack(root);
            break;
        case 5:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
