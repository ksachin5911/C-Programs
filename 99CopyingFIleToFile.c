#include<stdio.h>

int main()
{
    FILE *p;
    FILE *ptr;
    p = fopen("99Read.txt", "r");
    ptr = fopen("99Write.docx", "w");
    char c = fgetc(p);
    while(c!=EOF)
    {
        //printf("%c", &c);
        fputc(c, ptr);
        fputc(c, ptr);
        c = fgetc(p);
    }
    fclose(p);
    fclose(ptr);
    return 0;
}