#include <stdio.h>
#include <stdbool.h>

const int Getnumber()
{
    int myNumber;

    printf("Enter an integer: ");
    scanf("%i", &myNumber);
    return myNumber;
}

const char Getsymbol()
{
    char mySymbol;

    printf("Enter a maths symbol: (* , + , -, /): ");
    scanf("%char", &mySymbol);
    return mySymbol;
}

float calculatedNum(int a, int b, char s)
{
    float c;

    if(s = '*')
    {
        c = a*b;
    }

    return c;
}

int main()
{

    int a, b;
    char s;
    float c;
    const char mySymbol; 
    bool running = true;

        while(running)
        {
            a = Getnumber();

            b = Getnumber();
            s = Getsymbol();
            
            c = calculatedNum(a, b, s);
            printf("%f", c);

            printf("Want to use the calc again? Y/N: ");
            scanf("%c", &mySymbol);
            if(mySymbol == 'N')
            {
                running = false;
            }
            else;
        }

    return 0;
}