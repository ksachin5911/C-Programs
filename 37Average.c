#include<stdio.h>
float avg(float a, float b, float c);
int main()
{
    float a,b,c;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    printf("The average of %f %f and %f is %f", a,b,c,avg(a,b,c));
    
    return 0;
}
float avg(float a, float b, float c)
{
    float result;
    result = (a+b+c)/3;
    return result;
}