#include<stdio.h>

int main()
{
    FILE *ptr;
    
    ptr=fopen("96Functions2.txt", "w");
    fputc('9', ptr);
    fputc('3', ptr);
    fputc('r', ptr);
    fclose(ptr);
    return 0;
}