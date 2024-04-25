#include <stdio.h>

int main()
{
    int a, b;
    printf("                ****program for check number is even or odd****       \n\n\n\n");
    printf("enter the which you want to check:\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even \n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
    return 0;
}