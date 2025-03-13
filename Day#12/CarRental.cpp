#include <iostream>

// Just a simple car dealership with a fixed amount of cars with an array

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
// Future function list
void ShowCarDetails(const Car& cars); // Passing by reference instead of copying like i was before, this is way better for conserving memory for runtime
void ListCars(const Car& cars);

int main()
{
    Car cars[3] = // Fixed array will use vector when i expand the project
   {
    Car("MX-5", "Mazda", 2006 , 90),
    Car("Cougar Eliminator", "Mercury", 1970 , 95),
    Car("RX-7", "Mazda", 1991 , 3.3)
   };

   
   std::cout << "List of all cars:\n";
   for( int i = 0; i < (sizeof(cars) / sizeof(cars[0])); i++)
   {
        ShowCarDetails(cars[i]);
   }

   return 0;
}

void ShowCarDetails(const Car& cars)
{
   std::cout<< "Car details: \n"<< cars.CarName << std::endl;
   std::cout << cars.ModelName << std::endl;
   std::cout << cars.Ageofcar << std::endl;
   std::cout << cars.RentalPrice << "$ per hour"<< std::endl;
   //if(cars.IsRented == false ) 
   //{std::cout << "Available for rent!\n";} 
   //else{std::cout << "UNAAVAILABLE\n";}
   std::cout << "Availability: " << (cars.IsRented ? "UNAVAILABLE" : "Available!\n"); // This is way better and easier to read than above
   std::cout << "---------------------------------------------\n"; // Seperator of cars
}

