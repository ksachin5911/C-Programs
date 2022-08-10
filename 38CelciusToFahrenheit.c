//Celcius to fahrenheit using functions
#include<stdio.h>
float convert(float temp);

int main()
{
    float temp;
    printf("Enter a temperature in celcius: ");
    scanf("%f", &temp);
    printf("The value of temperature in fahrenheit is %f", convert(temp));
    return 0;
}
float convert(float temp)
{
    return (1.8*temp)+32;
}