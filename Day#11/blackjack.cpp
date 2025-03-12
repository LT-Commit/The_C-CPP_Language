#include <iostream>

// Game loop: Enter game -> given 2 random cards if 21 blackjack else ask if want to call or stay, show dealers 2 cards 

// If player wins double inputted money on loss take money

// variables

bool MainLoop = true;
int Balance = 100;
int InputtedBal;


// functions
void TableWelcome();
void PlayerHand();
void HouseHand();

// classes


int main()
{
    TableWelcome();

    while (MainLoop)
    {
        TableWelcome();
        std::cin >> InputtedBal;
    }
    

    return 0;
}