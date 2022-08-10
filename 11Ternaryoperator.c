#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num > 10) ? printf("Given number is greater than 10") : printf("Given number is less than 10");
    return 0;
}