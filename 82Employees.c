#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    long long int phone_no;
    int age;
    float salary;
    char blood_group[5];
    int id;
};

int main()
{
    struct employee e1;
    printf("Details of employee 1\n");
    e1.phone_no = 6399519876;
    e1.age = 30;
    e1.id = 56292;
    e1.salary = 45459.55;
    strcpy(e1.name, "Sachin");
    strcpy(e1.blood_group, "O+");
    printf("Name = %s\n", e1.name);
    printf("Phone number = %lld\n", e1.phone_no);
    printf("Age = %d\n", e1.age);
    printf("Salary = %.2f\n", e1.salary);
    printf("Blood Group = %s\n", e1.blood_group);
    printf("ID = %d\n", e1.id);

    printf("****************************\n");

    struct employee e2;
    printf("Details of employee 2\n");
    e2.phone_no = 7014874502;
    e2.age = 24;
    e2.id = 56294;
    e2.salary = 87456.55;
    strcpy(e2.name, "Rohandas");
    strcpy(e2.blood_group, "B+");
    printf("Name = %s\n", e2.name);
    printf("Phone Number = %lld\n", e2.phone_no);
    printf("Age = %d\n", e2.age);
    printf("Salary = %.2f\n", e2.salary);
    printf("Blood Group = %s\n", e2.blood_group);
    printf("ID = %d\n", e2.id);

    printf("****************************\n");

    struct employee e3;
    printf("Details of employee 3\n");
    e3.phone_no = 7619000678;
    e3.age = 45;
    e3.id = 56298;
    e3.salary = 15987.55;
    strcpy(e3.name, "Chamandas");
    strcpy(e3.blood_group, "AB-");
    printf("Name = %s\n", e3.name);
    printf("Phone Number = %lld\n", e3.phone_no);
    printf("Age = %d\n", e3.age);
    printf("Salary = %.2f\n", e3.salary);
    printf("Blood Group = %s\n", e3.blood_group);
    printf("ID = %d\n", e3.id);

    return 0;
}