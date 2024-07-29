#include <stdio.h>
int stack[10], i, j, choice, n, top = -1;
void push();
void pop();
void peek();
void display();
void main()
{
    printf("the number of elements in the array");
    scanf("%d", &n);

    while (choice != 4)
    {
        printf("\nenter the stack operatins from the following which you want to perform\n");
        printf("\n1.push \n2.pop \n3.peek \n4.display \n5.exit");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }

        case 2:
        {
            pop();
            break;
        }
        case 3:{
            peek();
            break;
        }
        case 4 :{
            display();
            
            break;
        }
        }
    }
}
