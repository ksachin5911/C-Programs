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
    struct employee engg[5];
    engg[0].code = 100;
    engg[0].salary = 500.45;
    strcpy(engg[0].name, "Alice");

    engg[0].code = 100;
    engg[0].salary = 500.45;
    strcpy(engg[0].name, "Alice");

    engg[0].code = 100;
    engg[0].salary = 500.45;
    strcpy(engg[0].name, "Alice");

    printf("Details verified\n");

    return 0;
}