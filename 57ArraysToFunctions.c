#include <stdio.h>
void printarray(int *ptr, int n);

int main()
{
    int arr[] = {2, 8, 99, 76, 23};
    printarray(arr, 5);
    return 0;
}
void printarray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *(ptr + i));
    }
}