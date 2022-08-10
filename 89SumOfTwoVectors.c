#include<stdio.h>
#include<string.h>

typedef struct vector
{
    int x;
    int y; 
}vector;
struct vector sum_vector(struct vector vec1,struct vector vec2)
{
    struct vector result;
    result.x = vec1.x+vec2.x;
    result.y = vec2.y+vec1.y;
    return result;
}
int main()
{
    vector v1,v2,result;
    v1.x = 45;
    v1.y = 68;
    v2.x = 89;
    v2.y = 24;
    result = sum_vector(v1,v2);

    printf("x dimension is of result is %d and y dimension of result is %d\n", result.x,result.y);
    return 0;
}