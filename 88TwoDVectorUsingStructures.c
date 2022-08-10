#include<stdio.h>
#include<string.h>

typedef struct vector
{
    int x;
    int y; 
}vector;

int main()
{
    vector v1,v2;
    v1.x = 45;
    v1.y = 68;

    printf("x dimension is %d and y dimension is %d\n", v1.x,v1.y);

    v2.x = 89;
    v2.y = 24;

    printf("x dimension is %d and y dimension is %d\n", v2.x,v2.y);
    return 0;
}