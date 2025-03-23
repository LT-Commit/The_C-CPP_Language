#include <stdio.h>

int main()
{
    long nc;

    nc = 0;

    while(getchar() != EOF)
    {
        nc++;
        printf("Amount of charecters in total: %1d\n", nc);

    }

    return 0;
}