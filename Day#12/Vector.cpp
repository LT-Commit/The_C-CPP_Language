#include <vector>
#include <iostream>

int main()
{
    std::vector<int> numbers; // Making the array, this doesnt have to have any data in but i put some dummy data to test
    std::cout << "Current data in vector:\n";
    for(int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";

    numbers.push_back(123);
    numbers.push_back(232);
    numbers.push_back(223); // pushes numbers to the front of the vector; This is really big and i need to use this for dynamic arrays
    
    std::cout << "\nWith pushes: \n";
    for(int num : numbers) // The colon means for each element do this specific thing which is cout num, that simple
    {
        std::cout << num << " ";
    }
    std::cout << "\n"; // just prints a spare line under this
    std::cout << "\n";
    std::cout << "With pops: \n";
    numbers.pop_back();
    numbers.pop_back();
    numbers.pop_back();

    for(int num : numbers) // The colon means for each element do this specific thing which is cout num, that simple
    {
        std::cout << num << " ";
        
    }

    

}