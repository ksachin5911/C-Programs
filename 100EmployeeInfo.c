#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("100UserDetails.txt", "w");
    int salary1;
    int salary2;
    char *name1[20];
    char *name2[20];
    printf("Enter the name of first employee: ");
    scanf("%s", name1);
    printf("Enter his/her salary: ");
    scanf("%d", &salary1);
    printf("Enter the name of secomd employee: ");
    scanf("%s", name2);
    printf("Enter his/her salary: ");
    scanf("%d", &salary2);
    fprintf(ptr, "%s,  %d\n", name1, salary1);
    fprintf(ptr, "%s,  %d\n", name2, salary2);
    fclose(ptr);
    return 0;
}