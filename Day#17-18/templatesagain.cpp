#include <iostream>
#include <string>

// Kind of like a macro? Not like generic at all

// Templates are very powerfull which is a better way to overflow

// Template is compiled by your usage/ rules

// THE BEST RULE IS TO NOT COPY CODE AVOID IT and templates are the best way to do it

// Best way to explain it is to show it lets say i want to print or log a value i would need to overflow but with templates its as 
// simple as:

template<typename T> // saying we will make a template -> setting template name = T  (TEMPLATE PERAMITER)
void Log(T message) // void Log taking in an argument of message with the type T think of it like a variable for a type
{
    std::cout << message << std::endl;
}
template<typename T>
void AddNums(T num1, T num2)
{
    std::cout<< num1 + num2 << std::endl;
}

// Created when its called NOT normally COMILER IGNORES UNTIL CALLED


// Template to call methods thats all it is simple as dat

int main()
{
    Log<int>(5); // TYPE SPECIFIER as <int>
    Log(5); // Dont need if its an explicit type
    Log<float>(3.3);
    Log<double>(3.3);
    Log<std::string>("Hello");
    std::cout << std::endl;
    AddNums(1,3);
    AddNums<float>(1.3, 3);

    return 0;
}






