#include<stdio.h>

int main()
{
    int n, m;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Address of n is %u\n", &n);
    printf("Address of n is %u\n", &m);
    printf("Value of n is %d\n", *&n);
    printf("Value of m is %d\n", *&m);
    return 0;
}