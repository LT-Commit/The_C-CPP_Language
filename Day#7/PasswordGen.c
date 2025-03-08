#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Day#3/UniversalMath.h"


char Randomchar()
{

    char j = "abcdefghijklmnopqrstuvwxyz" [UMATH_RandomNum(26)];


    return j;
}

int main()
{
    // Generate random charecters
    // Store them in a txt document

    


    int MAX;
    printf("How many charecters do you want?: ");
    scanf("%d\n", &MAX); // GETS HOW MANY CHARS YOU WANT


    for(int i =0; i <= MAX; i++)
    {
        char charecter = Randomchar();
        printf("%c", charecter);
    }

    




}