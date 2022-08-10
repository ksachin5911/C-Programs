#include<stdio.h>

int main()
{
    FILE *p;
    p = fopen("98Table.txt", "w");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(p, "Multiplication Table of %d is\n", num);
    for(int i=0;i<10;i++)
    {
        fprintf(p, "%d*%d = %d\n", num,i+1,(num*(i+1)));
    }
    fclose(p);
    return 0;
}