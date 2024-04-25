#include <stdio.h>

int main() {
    int rows, i, j, number = 1;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (j = i; j < rows; j++) {
            printf(" ");
        }

        // Print numbers in the pattern
        for (j = 1; j <= i; j++) {
            printf("%d", number++);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
