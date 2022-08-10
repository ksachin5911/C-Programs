#include<stdio.h>

int main()
{
    int n,rem=0,times=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n)
    {
        n = n/10;
        times++;
    }
    printf("Number of digits is %d", times);
    return 0;
}