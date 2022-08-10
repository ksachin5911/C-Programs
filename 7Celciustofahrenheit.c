#include<stdio.h>

int main()
{
    float cel, fah;
    printf("Enter the Temperature in celcius: ");
    scanf("%f", &cel);
    fah = ((1.8)*cel)+32;
    printf("Temperature in fahrenheit is: %f", fah);
    return 0;
}