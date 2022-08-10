#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int *p;
    p = (int *)calloc(n, sizeof(int));
    printf("Enter elemnts: ");
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &p[i]);
    }
     for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1,p[i]);
    }
    free(p);//reallocates the memory
    return 0;
}