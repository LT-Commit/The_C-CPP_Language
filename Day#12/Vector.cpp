#include <vector>
#include <iostream>

int main()
{
    std::vector<int> numbers = {1,2,3,3,2,23,3};

    for(int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";

    numbers.push_back(123);
    numbers.push_back(232);
    numbers.push_back(223); // pushes numbers to the front of the vector; This is really big and i need to use this for dynamic arrays
    
    std::cout << "\nWith pushes: \n";
    for(int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";
}