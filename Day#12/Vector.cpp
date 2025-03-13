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
}