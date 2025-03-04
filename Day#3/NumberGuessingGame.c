#include <stdio.h>
#include "UniversalMath.h"



int main()
{
    
    int Guess, GeneratedNum;

    GeneratedNum = UMATH_RandomNum(1000);

    printf("Welcome to the number guessing game!\n");

    while(Guess != GeneratedNum)
    {
        printf("\nPlease guess your first number: !");
        scanf("%d", &Guess);
        if(Guess > GeneratedNum)
        {
            printf("\nYour guess was too high");
        }
        else if(Guess < GeneratedNum)
        {
            printf("\nYour guess was to low");
        }
    }

    printf("\nYou got it right!");
    
}