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
    std::cout << "1. Create charecter" << std::endl;
    std::cin >> options;
    return options;
}


int main()
{
    std::vector<int> Players;

    std::cout << "Welcome to my dnd app!" << std::endl;

    while (true)
    {
        int Uop = options();

        switch (Uop)
        {
        case 1:
            std::cout << "You have created a charecter!";
            break;
        
        default:
            break;
        }

        break;
    }
}