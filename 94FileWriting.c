#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("94generated.txt", "w");
    int num=87;
    fprintf(ptr, "The value of number is %d", num);
    fclose(ptr);
    return 0;
}           