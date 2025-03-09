#include <stdio.h>
#include <stdbool.h>

int main()
{
    int Number;

    char Name[] = "Luna";

    Number = 3;

    printf("%d\n", Number);

    int* pNum = &Number;
    
    *pNum = 5;

    printf("%d\n", Number);

    bool exit = true;
    
    char option;
    while(exit)
    {
        
        printf("1: Change name\n2: Show name\n3: Quit\n");
        printf("Select your option: ");
        scanf("%c\n", &option);

        if( option = '1')
        {
            printf("Enter your new name: ");
            scanf("\n%c", Name);
        }
        if(option = '2')
        {
            printf("\n%c", Name);
        }
        if(option = '3')
        {
            exit == false;
        }
    }





    return 0;
}