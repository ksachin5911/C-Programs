#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("97Text.txt", "r");
    char c = fgetc(ptr);
    while(c != EOF)//EOF is end of program
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}