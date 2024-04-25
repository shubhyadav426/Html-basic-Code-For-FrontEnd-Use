#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("enter your salary:\n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax += tax + 0.05 * (income - 250000);
        printf("you have to pay following as tax per month-: %f\n", tax);
    }
    if (income >= 500000 && income <= 1000000)
        ;
    {
        tax += tax + 0.20 * (income - 500000);
        printf("you have to pay following as tax per month-: %f\n", tax);
    }

    if (income >1000000)
    {   
        tax += tax + 0.30 * (income - 1000000);
        printf("you have to pay following as tax per month-: %f\n", tax);
    }
    return 0;
}