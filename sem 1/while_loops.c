#include <stdio.h>

int main()
{

    int num;
    int sum = 0;
    do 
    {
        printf("enter a number ");
        scanf("%d", &num);
        sum += num;

    } while (num != 0);
    
    printf("sum is %d\n", sum);
    return 0;
}