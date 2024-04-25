#include <stdio.h>

int main()
{

    int a;
    print("enter the 1st no.");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d given number is even" ,a);
    }
    else
    {
        printf("%d given number is odd",a);
    }

    return 0;
} 