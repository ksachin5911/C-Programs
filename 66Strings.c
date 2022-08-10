#include<stdio.h>

int main()
{
    char str[] = {'S', 'a', 'c', 'h', 'i', 'n', '\0'};
    //char strr[] = "Sachin";
    char *ptr = str;
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}