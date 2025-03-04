#include <stdio.h>
#include "UniversalMath.h"


int main()
{
    float a,b;
    a = 4.44;
    b = 8.88;

    float MEOW = {UMATH_PITHAG(a, b)};

    float MEOW2 = {UMATH_PITHAG(b, a)};


    printf("\n%f", MEOW);
    printf("\n%f", MEOW2);

   return 0;
}