#include <stdio.h>

int main()
{
    int a, b, c;
    printf("value of principal is:\n");
    scanf("%d",&a);
    printf("value of rate is:\n");
    scanf("%d",&b);
    printf("value of time is:\n");
    scanf("%d",&c);
    printf("value of simple interst is: %d", (a * b * c) / 100);

return 0;
}