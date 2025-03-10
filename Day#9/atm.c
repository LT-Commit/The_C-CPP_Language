#include <stdio.h>
#include <stdbool.h>

int Balance = 100;
char UserOption;
int withdraw;
int Addition;
int TempMoni;
bool MainLoop = true;

void Welcome()
{
    printf("Welcome to the ATM\n");
    printf("Please select your option:\n1. Show bal\n2. Add money\n3. Withdraw\n4. Quit\n");
}

void Addmoney()
{
    printf("How much money do you want to add?\n");
    scanf("%d", &TempMoni);
    Balance = TempMoni + Balance;
}

void Withdrawmoney()
{
    printf("How much money do you want to withdraw?\n");
    scanf("%d", &TempMoni);
    Balance = TempMoni - Balance;
}

int main()
{
    while (MainLoop)
    {
        Welcome();
        UserOption = 0;
        scanf("%c", &UserOption);

        switch (UserOption)
        {
        case '1':
            printf("Your balance is: %d\n", Balance);
            break;

        case '2':
            Addmoney();
            break;

        case '3':
            Withdrawmoney();
            break;
        
        case '4':
            printf("\nThank you for using the ATM!\n");
            MainLoop = false;
            break;
        }
        
    }



    return 0;
}