#include<stdio.h>
int main()
{
    float rad;
    printf("Enter the value of radius: ");
    scanf("%f", &rad);
    float pi = 3.14;
    float area;
    area = pi*rad*rad;
    printf("The area of given circle is %f", area);
    return 0;
}