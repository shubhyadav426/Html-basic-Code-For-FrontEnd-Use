#include <stdio.h>

int main() {
    char c;

    // Input a character  
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if the character is in uppercase or lowercase using ASCII values
    if (c >= 'A' && c <= 'Z') {
        printf("The character is in uppercase.\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("The character is in lowercase.\n");
    } else {
        printf("Invalid input or not a letter.\n");
    }

    return 0;
}
