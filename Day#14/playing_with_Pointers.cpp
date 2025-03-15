#include <iostream>
// Function List
void Log(int Message);


int main()
{
    int Num1 = 1;
    int* pNum1 = &Num1;
    int NewValue = 100;
    Log(Num1);

    *pNum1 = NewValue; 
    Log(Num1);
}

void Log(int Message)
{
    std::cout << Message << std::endl;
}