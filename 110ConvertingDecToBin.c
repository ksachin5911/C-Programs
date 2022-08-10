#include<stdio.h>

int main()
{
    int n=22;
    int rem;
    int arr[20];
    int i=0;
    
    while(n)
    {
        rem=n%2;
        n=n/2;
        arr[i]=rem;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d", arr[j]);
    } 
    return 0;
}