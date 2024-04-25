#include <stdio.h>

int main()
{
    float celcius, farenheit;
    // input temp. in celcius
    printf("enter temperature in celsius:");
    scanf("%f", &celcius);

    // convert celsius to farenheit
    farenheit = (celcius * 9 / 5) + 32;

    // display the converted temp. in farenheit
    printf("%.2f celcius is equal to %.2f farenheit\n", celcius, farenheit);

    return 0;
}