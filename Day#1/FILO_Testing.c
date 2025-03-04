#include <stdio.h>

#define float EarthGravity = 9.8f;

int main()
{
    char Meowlist[4];

    Meowlist[0] = 'b';
    Meowlist[1] = 'b';
    Meowlist[2] = 'b';
    Meowlist[3] = 'b';
    
    
    for(int i = 0; i != 4; i++)
    {
        printf("%c", Meowlist[i]);
    }


    return 0;
}