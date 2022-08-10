#include<stdio.h>

int main()
{
    int n = 55;
    int *p = &n;
    printf("Value of p is %u\n", p);
    p++;
    printf("Value of p is %u\n", p);
    char c=8;
    char *a=&c;
    printf("The value of a is %u\n", a);
    a++;
    printf("The value of a is %u\n", a);

    return 0;
}