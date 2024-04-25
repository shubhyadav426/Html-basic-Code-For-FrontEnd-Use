#include <stdio.h>

int main()
{
    int num1, num2, num3, temp;
    // input two numbers
    printf("enter the first number.");
    scanf("%d", &num1);
    printf("enter the second number.");
    scanf("%d", &num2);

    // swap the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    // output the swapped numbers
    printf("after swapping \n,num1=%d and num2=%d\n", num1, num2);

    return 0;
}