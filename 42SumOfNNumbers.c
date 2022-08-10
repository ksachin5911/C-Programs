//Program to printf sum of first n natural numbers using recursion
#include<stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter the va,ue of n: ");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
    return 0;
}
int sum(int n)
{
    return (n*(n+1))/2;
}