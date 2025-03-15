#include <iostream>
// Function List
void Log(auto Message);


int main()
{
    int Num1 = 1; // Declares a variable called num1 and gives value of 1
    int* pNum1 = &Num1; // Declares a intiger POINTER and names it pNum and gives the value of ADDRESS of num1
    int NewValue = 100; // Declares a new variable of iniger for a new value
    Log(Num1); // Call the function Log and pass the data variable of Num1 which will be 1

    *pNum1 = NewValue;  // DEREFERENCE pNum1 Which will be the address of Num1 which we gave it and set it to the new value
    Log(Num1); // print the new output of num 1 Which will be 100

    // So lets say i want to print the memor address to the console this is now pretty easy since we learned how so lets do it

    std:: cout << "\nNum 1 address: " << &Num1;
    std:: cout << "\npNum1 address: " << &pNum1;
    std:: cout << "\n";
    
    // We can alwso pass by reference into functions which i did before on day 13 this is better because it doesnt copy data

    

    
    std::cout << Number;

}

void Log(auto Message)
{
    std::cout << Message << std::endl;
}