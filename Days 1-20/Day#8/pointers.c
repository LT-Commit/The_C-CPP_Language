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
    
    
    
    while(exit)
    {
        int option;

        printf("1: Change name\n2: Show name\n3: Quit\n");
        printf("Select your option: ");
        scanf("%d\n", &option);

        switch (option)
        {
        case 1:
            printf("\nEnter your new name: ");
            scanf("\n%c", &Name);
            break;

        case 2:
            printf("\n%c\n", Name);
            break;

        case 3:
            exit == false;
            break;
        
        default:
            printf("\nInput a valid option:\n");
            break;
        }
    }





    return 0;
}