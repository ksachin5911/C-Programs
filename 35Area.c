// Program to calculate area of a rectangle using functions
#include <stdio.h>
int area(int l, int b);

int main()
{
    int l, b, result;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    result = area(l, b);
    printf("Area = %d", result);

    return 0;
}
int area(int l, int b)
{
    int result;
    result = l * b;
    return result;
}