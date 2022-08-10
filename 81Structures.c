#include<stdio.h>
#include<string.h>

struct employee
{
    int id_num;
    float salary;
    char name[20];
};

int main()
{
    char name1[] = "Sachin";
    struct employee e1;
    e1.id_num = 56292; // '.' refers to member operator
    e1.salary = 75895.885;
    //e1.name = "Sachin" ---> it won't work
    //To input name, use strcpy function
    strcpy(e1.name,name1);
    printf("%d\n", e1.id_num);
    printf("%.4f\n", e1.salary);//%.nf is used to get number of decimal places
    printf("%s\n", e1.name);
    return 0;
}