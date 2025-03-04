#include <stdio.h>
#include <ctype.h>

float FehConvert(float celc)
{
    float feh;
    feh = celc * 9/5 +32;

    return feh;
}

int main()
{
    float c;
    float feh;

    printf("Input the Celcius and i will convert it to Fehreneit: ");
    scanf("%f", &c);

    feh = FehConvert(c);
    
    printf("\nCelcius: %f\n", c);
    printf("Fehrenheit: %f\n", feh);

}