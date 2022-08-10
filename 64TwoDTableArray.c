//Program without using function
#include<stdio.h>

int main()
{
    int tab[3][10];
    for(int i=0; i<10;i++)
    {
        printf("2*%d = %d\n", i+1, 2*(i+1));
    }
    printf("\n \n");
    for(int j=0;j<10;j++)
    {
        printf("7*%d = %d\n", j+1, 7*(j+1));
    }
    printf("\n \n");
    for(int k=0; k<10; k++)
    {
        printf("9*%d = %d\n",k+1, 9*(k+1));
    }

    return 0;
}

//***************************************************
//Program using Function

#include<stdio.h>
void table(int *tab, int num, int n)
{
    for(int i=0; i<10;i++)
    {
        tab[i]=num*(i+1);
    }
    for(int i=0; i<10;i++)
    {
        printf("%d*%d = %d\n", num, i+1, tab[i]);
    }
    printf("\n \n");
}

int main()
{
    int tab[3][10];
    table(tab[0], 2, 10);
    table(tab[1], 7, 10);
    table(tab[2], 9, 10);
    return 0;
}