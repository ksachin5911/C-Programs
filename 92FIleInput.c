#include<stdio.h>

int main()
{
    FILE *ptr;//FILE is a structure
    ptr = fopen("input.txt", "r"); //r means reading the file
    //ptr = fopen("input.txt", "w"); //w means writing the file
    
    return 0;
}