#include<stdio.h>

int main()
{
    int num;
    float c;
    FILE *ptr;
    ptr = fopen("93Sachin.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%f", &c);
    printf("The value of num is %d\n", num);
    printf("The value of c is %f\n", c);
    fclose(ptr);//used to close the file
    return 0;
}