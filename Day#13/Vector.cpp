#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{}; // creating a empty vector

    numbers.push_back(1);

    for(int num : numbers)
    {
        std::cout << num;
    }
}