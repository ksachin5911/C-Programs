#include <stdio.h>

int main()
{
    float maths, physics, computer;
    printf("Enter the marks of maths: ");
    scanf("%f", &maths);
    printf("Enter the marks of physics: ");
    scanf("%f", &physics);
    printf("Enter the marks of computer: ");
    scanf("%f", &computer);
    float per1, per2, per3;
    per1 = maths;
    per2 = physics;
    per3 = computer;

    float total_per;
    total_per = ((maths + physics + computer) / 300) * 100;

    if (total_per >= 40 && per1 >= 33 && per2 >= 33 && per3 >= 33)
    {
        printf("The Student is pass and percentage is %f", total_per);
    }
    else
    {
        printf("The Student is Fail and percentage is %f", total_per);
    }
    return 0;
}