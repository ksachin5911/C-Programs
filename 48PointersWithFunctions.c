#include<stdio.h>
void print(int a);

int main()
{
    int i=5;
    printf("Value of variable i is %d\n", i);
    print(i);
    printf("Address of variable i is %u\n", &i);
    return 0;
}
void print(int a)
{
    printf("Address of variable a is %u\n", &a);
}