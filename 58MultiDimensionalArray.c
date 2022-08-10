#include <stdio.h>

int main()
{
    int student = 2;
    int subjects = 2;
    int class= 2;
    int marks[2][2][2];
    for (int i = 0; i <student; i++)
    {
        for (int j = 0; j < class; j++)
        {
            for (int k = 0; k < subjects; k++)
            {
                printf("Enter the marks of student %d of class %d in subject %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < class; j++)
        {
            for (int k = 0; k < subjects; k++)
            {
                printf("The marks of student %d of class %d in subject %d are: %d\n", i + 1, j + 1, k + 1, marks[i][j][k]);
            }
        }
    }
    return 0;
}