#include <stdio.h>
int count(int *num, int n)
{
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > 0)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    int num[10];
    // ans=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);
        // if(num[i]>0)
        // {
        //     ans++;
        // }
    }

    printf("Number of positive integers is %d", count(num, 10));
    return 0;
}