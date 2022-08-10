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
    struct employee sachin = {"Sachin", 20000.45, 56292};
    //To set all elements to 0, do following
    //struct employee sachin = {0};

    printf("Name = %s\n", sachin.name);
    printf("Salary = %.2f\n", sachin.salary);
    printf("Code = %d\n", sachin.code);

    return 0;
}