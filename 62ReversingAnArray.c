#include<stdio.h>
void reverse(int *arr, int n);

int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    reverse(arr,5);
    for(int i=0; i<5;i++)
    {
        printf("Array elements: %d\n", arr[i]);
    }
    return 0;
}
void reverse(int *arr, int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}