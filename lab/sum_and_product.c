#include <stdio.h>

int main(){
    int n,t,sum=0,remainder,ch;
    printf("1.sum of digits\n");
    printf("2.product of digits\n");
    printf("enter choice \n");
    scanf("%d,&ch");
    switch(ch);
    {
        //case1:
        printf("enter an integer\n");
        scanf("%d",&n);
        t=n;
        while(t!=0);
        {
            remainder=t%10;
            sum=sum+remainder;
            t=t/10;

        }
        printf("sum of digits of %D=%D\n",n,sum);
        //case2:
        printf("enter an integer\n");
        scanf("%d",&n);
        while(num!=0)
        {
            rem=num
        }


    }
    return 0;
}