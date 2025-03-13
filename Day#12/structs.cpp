#include <iostream>



struct Cards // Calling the struct name 
{
    std::string CardName; // values of the struct
    int Value;
};


int main()
{
    Cards AS = {"Ace of spades", 3};

    std::cout << "Card name: " << AS.CardName << std::endl;
    std::cout << "Card value: " << AS.Value << std::endl;




    return 0;
}