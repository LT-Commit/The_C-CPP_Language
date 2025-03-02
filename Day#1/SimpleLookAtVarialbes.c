#include <stdio.h>

int main()
{
    // varaibles are allocated space in memory which i went over in my OneNotes which i can share, but i will re write a little of it here
    // We refger to a variables name and access the stored values
    // But we need to declare what type of data we are storing


    int x; // Decleration  
    x = 123; //Initialisation

    int AgeOfUser = 21; // Integer whole number
    float gpa = 3.3; // flloating point number
    char grade = 'C'; // single charecter

    char name[] = "meow"; // Array of charecters , emulation of a string

    printf("You are %i years old \n", AgeOfUser); // Here we are using a format specifier, %i for integer or i can use %d

    printf("Your gpa is: %f\n", gpa); // format specifier for floating point number

    printf("Hello %s how are you\n", name);

    return 0;
}