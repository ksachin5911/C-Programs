//Program to print the sum of the numbers occuring in the table of a number n
#include<stdio.h>

int main()
{
    int n, a, sum=0;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++)
    {
        a=n*i;
        sum+= a;
    }
    printf("%d", sum);
    return 0;
}