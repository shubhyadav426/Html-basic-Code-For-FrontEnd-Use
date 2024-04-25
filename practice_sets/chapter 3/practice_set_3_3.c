#include <stdio.h>

int main()
{
    float tax = 0, income;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("Your tax that should be paid is %f\n", tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
        printf("Your tax that should be paid is %f\n", tax);
    }   
    else
    {
        printf("Not applicable\n");
    }
    return 0;
}
