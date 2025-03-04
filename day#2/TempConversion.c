#include <stdio.h>
#include <ctype.h>

int main()
{
    float c;
    float feh;

    printf("Input the Celcius and i will convert it to Fehreneit: ");
    scanf("%f", &c);

    feh = c * 9/5 + 32;
    
    printf("\nCelcius: %f\n", c);
    printf("Fehrenheit: %f\n", feh);

}