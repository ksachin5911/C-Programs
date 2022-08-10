#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c>=92 && c<=122)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is uppercase");
    }
    return 0;
}   