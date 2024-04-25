//use of switch for creating diiferent choices

#include <stdio.h>

int main()
{
    int choice;
    printf("enter  your choice=");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("first \n");
        break;
    case 2:
        printf("second \n");
        break;
    case 3:
        printf("third");
        break;
    default:
        printf("wrong choice \n");
    }
    return 0;
}
