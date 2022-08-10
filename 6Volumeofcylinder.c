#include<stdio.h>
int main()
{
    float r, h, pi;
    pi = 3.14;
    printf("Enter the value of radius: ");
    scanf("%f", &r);
    printf("Enter the value of height: ");
    scanf("%f", &h);
    float vol;
    vol = pi*r*r*h;
    printf("The volume of given cylinder is %f", vol);
    return 0;
    }