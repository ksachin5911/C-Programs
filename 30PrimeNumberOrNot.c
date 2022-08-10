#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number", n);
            goto exit;
        }
    }

    if (n == 1)
    {
        printf("1 is neither a prime nor a composite number");
    }
    else
    {
        printf("%d is a prime number", n);
    }
exit:
    return 0;
}