#include <stdio.h>

int main()
{
    int i = 0;


    printf("\nUse of while loop\n");
    while (i <= 5)
    {
        printf("i is currently: %d\n",i);
        i++;
    }
    printf("\nUse of for loop\n");
    for(int f = 0; f <=5; f++)
    {
        printf("i is currently: %d\n",f);
    }
    

    return 0;
}