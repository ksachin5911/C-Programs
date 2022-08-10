#include<stdio.h>
void value(int *n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The value of n before increasing was %d\n", n);
    value(&n);
    printf("Value of n after increasing is %d\n", n);
    return 0;
}
void value(int *n)
{
    int a;
    a = 10*(*n);
    *n=a;
}
