#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("95Functions1.txt", "r");
    //char c = fgetc(ptr);
    printf("The value of the character is %c\n", fgetc(ptr));
    printf("The value of the character is %c\n", fgetc(ptr));
    printf("The value of the character is %c\n", fgetc(ptr));
    fclose(ptr);
    return 0;
}