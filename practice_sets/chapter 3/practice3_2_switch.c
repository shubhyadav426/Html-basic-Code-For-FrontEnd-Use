#include <stdio.h>

int main()
{

    int phy, chem, maths;
    float total;
    printf("enter your marks in physics\n");
    scanf("%d", &phy);
    printf("enter your marks in chemistry\n");
    scanf("%d", &chem);
    printf("enter your marks in Maths\n");
    scanf("%d", &maths);
    total = phy + chem + maths / 3;
    if ((total < 40) || phy < 33 || chem < 33 || maths < 33)
    {
        printf("your total perc. is %f and you are failed", &total);
    }
    else
    {
        printf("your total perc. is %f and you are passed", &total);
    }

    return 0;
}