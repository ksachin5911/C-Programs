//Creating an array of 5 numbers and verifying whether ptr+2 points to third element or not
#include<stdio.h>

int main()
{
    int arr[5];
    int *ptr= &arr[0];
    for(int i=0;i<5;i++)
    {
        printf("Enter the value of element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    ptr=ptr+2;
    printf("ptr+2 points to %d", *ptr);
    return 0;
}