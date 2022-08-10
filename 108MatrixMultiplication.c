#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3], b[3][3],result[3][3],sum=0;
    printf("Enter the elements of first matrix\n");
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("Enter element %d %d: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("Enter element %d %d: ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}