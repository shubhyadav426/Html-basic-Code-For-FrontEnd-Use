#include <stdio.h>

int main()
{
    char c;
    printf("enter the character");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        printf("character is lowercase");
    }
    else if(c>='A' && c<='Z')
    {
    printf("character is uppercase");
    }
    else if((c>='a' && c>='z') && (c>='A' && c<='Z')){
printf("character is uppercase as well as lowecase");
    }
    else{
        printf("invalid data");
    }
    return 0;
}