#include <iostream>
#include <vector>

// DND APP idea will inclise
/*
1) ALL Dice to roll
2) player hp - and +
3) long rest to set hp to full

*/

/*
Will need:
1) main loop
2) Player class
3) Rand Num
4) Create/ Delete charecter

*/

class Player
{

public:
int Health;
int Mana;
std::string name;
    
};

int options()
{
    int options = 0;
    std::cout << "1. Create charecter\n2. View Charecter details" << std::endl;
    std::cin >> options;
    return options;
}


int main()
{
    std::vector<int> Players;
    Player player;

    std::cout << "Welcome to my dnd app!" << std::endl;

    while (true)
    {
        int Uop = options();

        switch (Uop)
        {
        case 1:
            
            std::cout<< "\nEnter your new players health!" << std::endl;
            std::cin>> player.Health;
            std::cout<< "\nEnter your new players mana!" << std::endl;
            std::cin>> player.Mana;
            std::cout<< "\nEnter your new players name!" << std::endl;
            std::cin>> player.name;
            break;
        case 2:
            std::cout << "\nYour player details are:";
            std::cout << "\nYour name is: " << player.name;
            std::cout << "\nYour mana is: " << player.Mana;
            std::cout << "\nYour health is: " << player.Health;
            break;
        
        default:
            break;
        }
    
        

        
    }
}