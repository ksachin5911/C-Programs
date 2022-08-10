//Program to print sum of first n natural numbers
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i=0; i<=n; i++)
    {
        sum+= i;
    }
    printf("%d", sum);
    return 0;
}