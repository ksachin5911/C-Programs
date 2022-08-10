#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the first string: ");
    scanf("%s", str1);
    char c;
    int i=0;
    printf("Enter the first character of second string: ");
    while(c!= '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i] = '\0';
    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);
    printf("Value of strcmp for these strings is %d", strcmp(str1, str2));
    
    return 0;
}