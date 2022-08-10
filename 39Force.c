//Program to calculate force on a body of mass m
#include<stdio.h>
float force(int mass, float g);

int main()
{
    int mass;
    float g=9.8;
    printf("Enter mass: ");
    scanf("%d", &mass);
    printf("Force of attraction is %f", force(mass, g));

    return 0;
}
float force(int mass, float g)
{
    return mass*g;
}