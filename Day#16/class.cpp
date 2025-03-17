#include <iostream>

// This really isnt hard after coding on day 15 🤷

class Student // declaring a class call student
{
    private:



    public: // public available variables/constructors
        float gpa;
        int age;
        std::string Firstname;
        std::string Lastname;

};

int main()
{
    Student student1; // Declaring student1 as the class Student 
    student1.gpa = 3.33;
    student1.age = 18;
    student1.Firstname = "Bob";
    student1.Lastname = "Bark";

    std::cout << student1.Firstname << std::endl; // Accsessomg nlegh blegh yea
}

