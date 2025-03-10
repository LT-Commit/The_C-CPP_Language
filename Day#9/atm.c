#include <stdio.h>
#include <stdbool.h>

int Balance = 100;
char UserOption;
int withdraw;
int Addition;

void Welcome()
{
    printf("Welcome to the ATM\n");
    printf("Please select your option:\n1. Show bal\n2. Add money\n3. Withdraw\n4. Quit\n");
}

int main()
{
    while (true)
    {
        Welcome();
        scanf("%c", &UserOption);

        switch (UserOption)
        {
        case '1':
            printf("Your balance is: %d\n", Balance);
            break;
        
        default:
            break;
        }
        
        break;
    }



    return 0;
}