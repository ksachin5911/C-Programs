#include<stdio.h>
#include<string.h>

struct employee
{
    char name[20];
    float salary;
    int code;
};

int main()
{
    struct employee kumar;
    struct employee *ptr;
    ptr = &kumar;
    (*ptr).code = 1002;//this statement can also be written as : ptr->code = 1002;
    printf("code = %d\n", ptr->code);// "->" is called arrow operator.
    
    return 0;
}