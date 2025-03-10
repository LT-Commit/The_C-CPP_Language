#include <stdio.h>
#include <stdbool.h>

int Balance = 100;
int withdraw;
int Addition;

void Welcome()
{
    printf("Welcome to the ATM\n");
    printf("Please select your option:\n1. Show bal\n2. Add money\n3. Withdraw\n");
}

int main()
{
    while (true)
    {
        Welcome();
        
        break;
    }



    return 0;
}