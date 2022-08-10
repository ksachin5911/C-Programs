#include<stdio.h>
int main()
{
    float l;
    float b;
    printf("Enter the value of l: ");
    scanf("%f", &l);
    printf("Enter the value if b: ");
    scanf("%f", &b);
    float area;
    area = l*b;
    printf("Area of given rectangle is %f", area);
    return 0;
}