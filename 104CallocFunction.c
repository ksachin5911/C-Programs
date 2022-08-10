#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));//calloc means continuous allocatiion, if no input value is given by the user then,
                                         // it initializes all elements from zero 
    for(int i=0;i<6;i++)
    {
        printf("The value of element %d is %d\n",i+1,ptr[i] );
    }
    free(ptr);
    return 0;
}