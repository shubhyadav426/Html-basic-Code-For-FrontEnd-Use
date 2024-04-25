#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the first number");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d", &b);
    c = (a < b) ? a - b : b + a;
    printf("value of c is %d", c);

    return 0;
}