#include <stdio.h>
#include <string.h>

typedef struct employee//typedef is used to create alias name for data types
{
    char name[20];
    float salary;
    int code;
}emp;
void show(emp emp1)
{
    printf("The name of employee is: %s\n", emp1.name);
    printf("The code of employee is: %d\n", emp1.code);
    printf("The salary of employee is: %f\n", emp1.salary);
}
int main()
{
    emp e1;

    emp *ptr;
    ptr = &e1;
    ptr->code = 555;
    ptr->salary = 45.67;
    strcpy(ptr->name, "Sachin");
    show(e1);
    return 0;
}