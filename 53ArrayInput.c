#include <stdio.h>

int main()
{
    int marks[4];
    printf("Enter marks: ");
    scanf("%d", &marks[0]);
    printf("Enter marks: ");
    scanf("%d", &marks[1]);
    printf("Enter marks: ");
    scanf("%d", &marks[2]);
    printf("Enter marks: ");
    scanf("%d", &marks[3]);
    printf("Entered marks are %d %d %d %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}