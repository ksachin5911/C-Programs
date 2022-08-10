// program to print multiplication table in reverse order
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
    {
        printf("%d*%d = %d\n", n, i, n * i);
    }
    return 0;
}