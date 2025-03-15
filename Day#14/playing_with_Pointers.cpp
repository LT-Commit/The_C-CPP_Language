#include <iostream>
// Function List
void Log(int Message);


int main()
{
    int Num1 = 1; // Declares a variable called num1 and gives value of 1
    int* pNum1 = &Num1; // Declares a intiger POINTER and names it pNum and gives the value of ADDRESS of num1
    int NewValue = 100; // Declares a new variable of iniger for a new value
    Log(Num1); // Call the function Log and pass the data variable of Num1 which will be 1

    *pNum1 = NewValue;  // DEREFERENCE pNum1 Which will be the address of Num1 which we gave it and set it to the new value
    Log(Num1); // print the new output of num 1 Which will be 100
}

void Log(int Message)
{
    std::cout << Message << std::endl;
}