#include <stdio.h>
#include <math.h>

float pythago(float a, float b)
{
    float c;
    c = (sqrt(a*a + b*b));
    return c;
}

int main()
{
    float a, b, c;
    /* So lets just do some quick pythag just so i can use some finctions and variable, 
        So it would be, a sqr + b sqr = c sqr

        Lets just say for this example a and b are int not float numbers
    */
    a = 4;
    b = 4;
    c = sqrt(a*a + b*b);
    printf("%f \n", c); // bewm

    //This is alot of code what takes up the main so lets condence it to once function like pythago()
    float pyt;
    pyt = pythago(a, b);
    printf("%f", pyt);

}