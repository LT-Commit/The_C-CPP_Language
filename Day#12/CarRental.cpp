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

void ShowCarDetails(Car car);

int main()
{
    Car cars[3] = 
   {
    Car("MX-5", "Mazda", 2006 , 90),
    Car("Carname", "Modelname", 3 , 3.3),
    Car("Carname", "Modelname", 3 , 3.3)
   };

   
   std::cout << "List of all cars:\n";
   for( int i = 0; i < (sizeof(cars) / sizeof(cars[0])); i++)
   {
        ShowCarDetails(cars[i]);
        std::cout << "\n";
   }

   return 0;
}

void ShowCarDetails(Car cars)
{
   std::cout<< "Car details: \n"<< cars.CarName << std::endl;
   std::cout << cars.ModelName << std::endl;
   std::cout << cars.Ageofcar << std::endl;
   std::cout << cars.RentalPrice << "$ per hour"<< std::endl;
   if(cars.IsRented == false ) 
   {std::cout << "Available for rent!\n";} 
   else{std::cout << "UNAVAIBALE\n";}
   std::cout << "---------------------------------------------\n";
}