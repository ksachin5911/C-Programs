#include<stdio.h>

int main()
{
    int arr[] = {2,67,45,22,345,234,987};
    int max=0;
    for(int i=0;i<7;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Largest element is %d", max);
    return 0;
}