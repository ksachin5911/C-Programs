// Program to add two numbers using functions
#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a, b, result;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    result = sum(a, b);
    printf("Sum = %d", result);

    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
