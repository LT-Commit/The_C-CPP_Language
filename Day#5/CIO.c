#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    c = getchar();

    while(c != EOF) // while c != eof ( end of file )
    {
        putchar(c);
        c = getchar();
    }

    return 0;
}