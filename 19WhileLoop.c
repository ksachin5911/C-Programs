//Program to print natural numbers from 10 to 20 
#include<stdio.h>

int main()
{
    int n=0;
    while(n<=20)
    {
        if(n>=10)
        {
            printf("%d\n", n);
        }
        n++;
    }
    return 0;
}