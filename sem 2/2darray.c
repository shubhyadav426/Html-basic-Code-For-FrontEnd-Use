#include <stdio.h>
int main()
{
    int rows, column;
    printf("enter the no. of rows:");
    scanf("%d", &rows);
    printf("enter the no. of columns:");
    scanf("%d", &column);
    int array[rows][column];
    printf("enter the elements of the %d x %d array:\n", rows, column);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("the elememts of the %d x %d array are   :\n", rows, column);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}