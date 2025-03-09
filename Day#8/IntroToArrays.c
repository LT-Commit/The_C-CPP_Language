#include <stdio.h>

int main()
{
    char LetterList[] = "meow";

    


    for(short i = 0; i <= sizeof(LetterList); i++)
    {
        printf("%c", LetterList[i]);
    }



    printf("\n");
    return 0;
}