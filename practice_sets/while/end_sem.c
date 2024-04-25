#include<stdio.h>
#include<conio.h>
void main( ){
int a=0,b=1, c, i=1;
do
{
printf("%d",a);
c= a+b;
a=b;
b=c;
i++;
}
while (i<=10);
getch( );
}
