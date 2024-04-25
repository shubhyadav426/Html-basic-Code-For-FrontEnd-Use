#include <stdio.h>

int main() {
    int number, i;
    int isPrime = 1; // Assume the number is prime initially

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (number <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0; // If divisible by any number, it's not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
