#include <stdio.h>

int main()
{
    int a, b, max;
    printf("enter the firstno.\n");
    scanf("%d", &a);
    printf("enter the second no.");
    scanf("%d", &b);
    max = (a > b) ? a : b;
    printf("larger no. is=%d", max);
    return 0;
}