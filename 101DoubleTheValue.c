#include<stdio.h>

int main()
{
    int n;
    FILE *pp;
    pp = fopen("101Integer.txt", "r");
    fscanf(pp, "%d", &n);
    //FILE *pp;
    pp = fopen("101Integer.txt", "w");
    fprintf(pp, "%d", 2*n);
    fclose(pp);
    return 0;
}