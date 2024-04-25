#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the first no.");
    scanf("%d", &a);
    printf("enter the second no.");
    scanf("%d", &b);
    c = (a > b) ? a - b : b + a;
    printf("valu of c is=%d", c);

    return 0;
}
