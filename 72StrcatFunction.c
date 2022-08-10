#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Sachin";
    char str2[] = "kumar";
    strcat(str1,str2);
    printf("Now str1 is %s", str1);
    return 0;
}