#include<stdio.h>
#include<string.h>

int main()
{
    char st1[] = "engineer";
    char st2[10];
    strcpy(st2, st1);
    printf("Now the value of st2 is %s", st2);
    return 0;
}