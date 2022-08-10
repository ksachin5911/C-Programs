#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    float salary;
    int code;
};
void show(struct employee emp)
{
    printf("The name of employee is: %s\n", emp.name);
    printf("The code of employee is: %d\n", emp.code);
    printf("The salary of employee is: %f\n", emp.salary);
}
int main()
{
    struct employee e1;

    struct employee *ptr;
    ptr = &e1;
    ptr->code = 555;
    ptr->salary = 45.67;
    strcpy(ptr->name, "Sachin");
    show(e1);
    return 0;
}