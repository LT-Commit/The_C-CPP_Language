#include <iostream>


constexpr uintptr_t BusCount = 0;
constexpr double radius { 3.0 };
constexpr double pi { 3.14159265359 };
constexpr double circumference { 2.0 * radius * pi };

int main()
{
    std::cout << BusCount << std::endl;
    std::cout << "Our circle has circumference " << circumference << "\n";

    return 0;
}