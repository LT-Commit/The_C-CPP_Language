#include <iostream>

// Just a simple car dealership with a fixed ammopunt of cars with an array

// I will make another project with a vector array soon after this so its expandable

struct Car
{
    // Listing vars
    std::string CarName;
    std::string ModelName;
    int Ageofcar;
    float RentalPrice;
    bool IsRented;

    // Car constructors

    Car(std::string CarN, std::string ModelN, int AOC, float RentalP) // If function is called and these params ar egiven construst a car struct
    {
        CarName = CarN;
        ModelName = ModelN;
        Ageofcar = AOC;
        RentalPrice = RentalP;
        IsRented = false;
    }

};

int main()
{
    Car cars[3] = 
   {
    Car("Carname", "Modelname", 3 , 3.3),
    Car("Carname", "Modelname", 3 , 3.3),
    Car("Carname", "Modelname", 3 , 3.3)
   };

   std::cout<< cars[0].CarName << std::endl;
}
