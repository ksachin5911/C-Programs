#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < 10; i++)
    {
        if(i != n)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}