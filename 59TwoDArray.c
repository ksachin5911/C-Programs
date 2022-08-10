#include<stdio.h>
int marks[3][2];
void display( int students, int subjects);

int main()
{
    int subjects=2;
    int students=3;
    
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            printf("Enter the marks of student %d in subject %d: ",i+1,j+1);
            scanf("%d", &marks[i][j]);
        }
        
    }
    display(3,2);
    return 0;
}
void display(int students,int subjects)
{
    
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            printf("Marks for student %d in subject %d is %d\n", i+1,j+1, marks[i][j]);
        
        }
    }
}