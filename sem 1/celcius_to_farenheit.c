#include <stdio.h>

int main()
{ 
    int a;
    printf("enter temprature in celsius: \n");
    scanf("%f", &a);
    printf("the value of temperature in farenhiet is: \n %f", a * 1.8 + 32);
    return 0;
}