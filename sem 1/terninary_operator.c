#include <stdio.h>

int main()
{

    int a;
    printf("enter a number \n");
    scanf("%d", &a);
    //one liner if else ki jagah pe use kr skte hai
    (a < 5) ? printf("a is less than 5") : printf("a is not less than 5");
    return 0;
}  