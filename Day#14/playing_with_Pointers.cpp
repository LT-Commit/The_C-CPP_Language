#include <iostream>
#include <cstring>
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
    std:: cout << "\npointer -> Num1 address: " << &pNum1;
    std:: cout << "\n";
    
    // We can alwso pass by reference into functions which i did before on day 13 this is better because it doesnt copy data

    // The pointers we are allocating right now are in the stack so what if we want to do it in the Heap well lets do that

    char* buffer = new char[8]; // Makes a 8 byte block since a char is 1 byte , Then returns a pointer to that first stack
    memset(buffer, 0, 8); // This will set the block of data to what we want 

    std:: cout << buffer[1];


    delete[] buffer; // Delete the data when we dont use it anymore this will stop a memory leak since we are workign with the stack now

    



}

void Log(auto Message)
{
    std::cout << Message << std::endl;
}