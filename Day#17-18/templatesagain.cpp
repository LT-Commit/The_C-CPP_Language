#include <iostream>
#include <string>

// Kind of like a macro? Not like generic at all

// Templates are very powerfull which is a better way to overflow

// Template is compiled by your usage/ rules

// THE BEST RULE IS TO NOT COPY CODE AVOID IT and templates are the best way to do it

// Best way to explain it is to show it lets say i want to print or log a value i would need to overflow but with templates its as 
// simple as:

template<typename T> // saying we will make a template -> setting template name = T
void Log(T message) // void Log taking in an argument of message with the type T think of it like a variable for a type
{
    std::cout << message << std::endl;
}


int main()
{
    Log(5);
    Log(3.3);
    Log("Hello");

    return 0;
}






