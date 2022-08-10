#include<stdio.h>
void value(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    value(n); //This function will not change the value of n as it is call by value
    printf("Value of n after changing is %d", n);
    return 0;
}
void value(int n)
{
    int a;
    a = 10*n;
    n=a;
}