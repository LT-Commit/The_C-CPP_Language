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

float UMATH_GravityForceOfGravity(float graviationalConstant, float MassObj1, float MassObj2, float Distance) // Newtons universal naw of gravitation
{
    // F = (G*M*m)/r*r
    float ForceOfGravity;

    float ForceOfGravity = (graviationalConstant* MassObj1 * MassObj2)/Distance*Distance;
    return ForceOfGravity;
}