#include <stdio.h>

int main()
{

    char c;
    // 97-122(lower ASCII code range)
    printf("enter the character\n");
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
    {
        printf("%c is in lowercase\n", c);
    }
    else
    {
        printf("not lowercase\n");
    }

   return 0;
}