#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Sachin";
    char str2[] = "kumar";
    int value = strcmp(str1, str2);//used to compare two strings
    printf("Value = %d", value);
    return 0;
}