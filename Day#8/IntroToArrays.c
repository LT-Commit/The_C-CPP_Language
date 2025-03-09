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
    return 0;
}