#include <stdio.h>
#include "UniversalMath.h"


int main()
{
    float a,b;
    a = 4.44;
    b = 8.88;

    float MEOW = {UMATH_PITHAG(a, b)};


    printf("%f", MEOW);

   return 0;
}