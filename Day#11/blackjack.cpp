#include <iostream>

// Game loop: Enter game -> given 2 random cards if 21 blackjack else ask if want to call or stay, show dealers 2 cards 

// If player wins double inputted money on loss take money

// variables

bool MainLoop = true;
int Balance = 100;
int GameMoney;
bool GameLoop = true;
bool win;


// functions
void TableWelcome();
bool PlayerHand();
bool HouseHand();
int GameBal();

// classes



int main()
{
    TableWelcome(); //  Welcome to the table 

    while (MainLoop)
    {
        std::cout<< "Your balance is: " << Balance;
        GameMoney = GameBal(); // Get how much the player is playing with

        while (GameLoop)
        {
            bool Playerwin = HouseHand();
            bool HouseWin = PlayerHand();


            if(Playerwin)
            {
                std::cout << "\nYou won!\n";
                Balance = Balance + (GameMoney  * 2); 
                break;
            }
            if(HouseWin)
            {
                std::cout << "You lost! You have lost " << GameMoney << std::endl;
                Balance = Balance - GameMoney;
                break;  
            }
            
        }

        
    }
    

    return 0;
}

void TableWelcome()
{
    std:: cout << "\nWelcome to the table this is my first game so dont judge to hard: \n";
    std:: cout << "Today you gonna be playing blackjack! \n";
    std:: cout << "If you dont know how to play then just get to 21 ez, ok enjoy\n";
}

int GameBal()
{
    int i;
    bool validInput =false;
    while (!validInput)
    {
        std::cout << "\nHow much money do you want to play with?: ";
        std::cin >> i;
        
        if(i>Balance)
        {
            std::cout << "\nYou dont have enough money for that input .. brokie\n";
        }
        else
        {
            Balance = Balance-i;
            return i;
        }

    }
}

bool PlayerHand()
{

}
bool HouseHand()
{
    
}