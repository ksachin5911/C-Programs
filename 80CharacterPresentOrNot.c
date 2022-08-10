// Program to check whether a character is present in a string or not//
#include <stdio.h>

int main()
{
    char st[20];
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("enter a string: ");
    scanf("%s", st);

    char *ptr = st;
    int i = 0;
    int count = 0;
    while (*ptr != '\0')
    {
        if (st[i] == c)
        {
            count = 1;
        }
        ptr++;
    }
    if (count)
    {
        printf("The character %c is present in string %s", c, st);
    }
    else
    {
        printf("The character %c is not present in string %s", c, st);
    }
    return 0;
}