#include <stdio.h>

int main()
{
    char LetterList[] = "meow";

    


    for(short i = 0; i <= sizeof(LetterList); i++)
    {
        printf("%c", LetterList[i]);
    }



    printf("\n");




    char Numbers[] = "12345678903413213";
    
    for(short i = 0; i <= sizeof(Numbers); i++)
    {
        printf("%c", Numbers[i]);
    }
    printf("\n");

    //I want to store them on a txt document so i will try do that or mess around more with arrays we will see

    int TenNumbers[9];
    TenNumbers[0] = 1;
    TenNumbers[1] = 1;
    TenNumbers[2] = 1;
    TenNumbers[3] = 1;
    TenNumbers[4] = 1;
    TenNumbers[5] = 1;
    TenNumbers[6] = 1;
    TenNumbers[7] = 1;
    TenNumbers[8] = 1;
    TenNumbers[9] = 1;
    
    for(short i = 0; i <= 9; i++)
    {
        printf("%d", TenNumbers[i]);
    }
    printf("\n");

    return 0;
}