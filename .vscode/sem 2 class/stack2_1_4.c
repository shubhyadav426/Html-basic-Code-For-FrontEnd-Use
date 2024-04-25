#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

// Stack structure
struct Stack
{
    int top;
    double items[MAX_STACK_SIZE];
};

// Function prototypes
void push(struct Stack *s, double value);
double pop(struct Stack *s);
double evaluatePostfix(char *expression);

int main()
{
    char expression[100];
    printf("Enter postfix expression: ");
    scanf("%s", expression);

    double result = evaluatePostfix(expression);
    printf("Result: %.2lf\n", result);

    return 0;
}

void push(struct Stack *s, double value)
{
    if (s->top == MAX_STACK_SIZE - 1)
    {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        s->items[++(s->top)] = value;
    }
}

double pop(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        return s->items[(s->top)--];
    }
}

double evaluatePostfix(char *expression)
{
    struct Stack s;
    s.top = -1;

    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (isdigit(expression[i]))
        {
            push(&s, expression[i] - '0');
        }
        else
        {
            double operand2 = pop(&s);
            double operand1 = pop(&s);
            double result;

            switch (expression[i])
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                if (operand2 == 0)
                {
                    printf("Division by zero error\n");
                    exit(EXIT_FAILURE);
                }
                result = operand1 / operand2;
                break;
            default:
                printf("Invalid operator\n");
                exit(EXIT_FAILURE);
            }
            push(&s, result);
        }
    }

    return pop(&s);
}