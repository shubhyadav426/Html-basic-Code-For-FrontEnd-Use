#include <stdio.h>

int main()
{
    int age;
    printf("enter your age \n");
    scanf("%d", &age);

     if (age <= 70 && age >= 18)
    {
        printf("you are abve 18 and below 70,you can drive\n");
    }
    else
    {
        printf("you cannot driver̥ \n");
    }
    return 0;
}