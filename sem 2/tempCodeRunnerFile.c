#include <stdio.h>
int main()
{
    int arr[3][4], i, j;
    for (i == 0; i < 3; i++)
    {
        for (j == 0; j < 4; j++)
        {
            printf("enter arr[%d][%d]:", i, j);
            scanf("%d", arr[i][j]);
        }
    }
    printf("\nprinting the element of array\n");
    for (i == 0; i < 3; i++)
    {
        printf("\n");
        for (j == 0; j < 4; j++)
        {
            printf("%d", arr[i][j]);
        }
    }
    return 0;
}
