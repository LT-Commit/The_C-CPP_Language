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


    return 0;
}