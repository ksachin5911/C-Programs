#include<stdio.h>

int main()
{
    float p,r,t, si;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate: ");
    scanf("%f", &r);
    printf("Enter the time: ");
    scanf("%f", &t);
    si = (p*r*t)/100;
    printf("Simple interest is %f", si);
    return 0;
}