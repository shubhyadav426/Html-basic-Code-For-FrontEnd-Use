#include <stdio.h>

// Function to check if a number is prime
int a(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main()  {
    printf("Prime numbers between 50 and 100 are:\n");
  
    // Check each number between 50 and 100
    for (int i = 50; i <= 100; i++) {
        if (a(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
