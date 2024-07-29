#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (newNode == NULL)
        return; // Memory allocation failed
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void displayList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL; // Initialize an empty list
    int value;

    while (1)
    {
        printf("Enter a value to insert into the list (or -1 to end): ");
        scanf("%d", &value);
        if (value == -1)
        {
            break;
        }
        insertAtEnd(&head, value);
    }

    printf("Linked List: ");
    displayList(head);

    return 0;
}
