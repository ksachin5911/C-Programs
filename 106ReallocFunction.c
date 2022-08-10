#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(6*sizeof(int) );
    printf("Enter elements: ");
    for (int i = 0; i < 6; i++)
    {
        
        scanf("%d", &ptr[i]);
    }
     for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n", i+1,ptr[i]);
    }
    ptr = realloc(ptr, 10*sizeof(int));//realloc allocates memory of new size using previous pointer
    for (int i = 0; i < 10; i++)
    {
        
        scanf("%d", &ptr[i]);
    }
     for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n", i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}