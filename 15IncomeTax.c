#include<stdio.h>

int main()
{
    int inc;
    printf("What is your income: ");
    scanf("%d", &inc);
    if(inc>=250000 && inc<500000)
    {
        printf("Your income tax is 5 percent, i.e. %d", (5*inc)/100);
    }
    else if(inc>=500000 && inc<1000000)
    {
        printf("Your income tax is 20 percent, i.e. %d", (20*inc)/100);
    }
    else if(inc>=1000000)
    {
        printf("Your income tax is 30 percent, i.e. %d", (30*inc)/100);
    }
    else if(inc<250000)
    {
        printf("No income tax for you");
    }
    return 0;
}