#include <math.h>
#include <stdlib.h>
#include <time.h>

float UMATH_PITHAG(float a, float b)
{
    float c;
    c = sqrt(a*a + b*b);

    return c;
}

int UMATH_RandomNum(int max)
{
    srand(time(NULL));
    int RandNum;
    RandNum = rand() % max +1;
    return RandNum;
}