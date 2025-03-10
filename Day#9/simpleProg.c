#include <stdio.h>

int main()
{
    printf("Chest Invenctory:\n");

    char chest[40] = "64x Chests\n64x Sticks\n64x Wooden Planks";

    for(int i = 0; i <= sizeof(chest); i++)
    {
        printf("%c", chest[i]);
    }
    printf("\n");

    




    

    return 0;
}