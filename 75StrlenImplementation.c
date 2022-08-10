#include<stdio.h>
#include<string.h>
int string_length(char st[])
{
    char *ptr = st;
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char *st = "Sachin";
    int l = string_length(st);
    printf("The length of string is %d", l);
    
    return 0;
}