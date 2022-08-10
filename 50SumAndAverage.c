#include <stdio.h>
int sum_average(int a, int b, int *sum, int *avg);

int main()
{
    int a, b, sum, avg;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    sum_average(a, b, &sum, &avg);
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
    return 0;
}
int sum_average(int a, int b, int *sum, int *avg)
{
    *sum = a + b;
    *avg = (a + b) / 2;
}