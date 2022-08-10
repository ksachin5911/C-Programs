#include<stdio.h>

int main()
{
    int i=40;
    int *p;
    int **pp;
    p = &i;
    pp = &p;
    printf("The value of i is %d", **pp);
    return 0;
}