#include <stdio.h>

int main()
{

    int a, b, c, d;
    printf("enter four different no.:- \n");
    scanf("%d"
          "%d"
          "%d"
          "%d",
          &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("a is the greatest no. in all");
    }
    else if (b > a && b > c && b > d)
    {
        printf("b is the greatest no. in all");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is the greatest no. in all");
    }
    else if (d > a && d > c && d > b)
    {
        printf("d is the greatest no. in all");
    }
    else
    {
        printf("invalid data");
    }

    return 0;
}