// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *ptr;
//     printf("The size of int is %d\n", sizeof(int));//sizeof() function prints the size of the integer on our machine
//     ptr = (int *)malloc(6 * sizeof(int));
//     printf("Enter elemnts: ");
//     for (int i = 0; i < 6; i++)
//     {
        
//         scanf("%d", &ptr[i]);
//     }
//      for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d element is %d\n", i+1,ptr[i]);
//     }
    
//     return 0;
//     free(ptr);
// }
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    printf("The size of float is %d\n", sizeof(float));//sizeof() function prints the size of the floating point number on our machine
    ptr = (float *)malloc(6 * sizeof(float));//malloc means memory allocation
    printf("Enter elemnts: ");
    for (int i = 0; i < 6; i++)
    {
        
        scanf("%f", &ptr[i]);
    }
     for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %f\n", i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}