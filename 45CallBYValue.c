#include<stdio.h>
int sum(int a, int b);


int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Sum of %d and %d is %d", a,b,sum(a,b));

    return 0;
}
int sum(int a, int b)
{
    return a+b;
}