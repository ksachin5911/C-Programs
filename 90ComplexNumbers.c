#include <stdio.h>
#include <string.h>

typedef struct complex
{
    float real, img;
} complex;

void display(complex c)
{
    printf("The value of real part is %f\n", c.real);
    printf("The value of imaginary part is %f\n", c.img);
}
int main()
{
    complex num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value of the number %d: ", i + 1);
        scanf("%f", &num[i].real);

        printf("Enter the imaginary value of the corresponding number: ");
        scanf("%f", &num[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(num[i]);
    }
    return 0;
}