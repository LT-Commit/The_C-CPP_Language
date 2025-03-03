#include <stdio.h>

int main()
{
    const int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18) // Checks if the statment is true or false so if age is larger or equil to 18 print this ... else..
    {
        printf("You are 18 or over you can enter!");
    }
    else{ // else run this 
        printf("You are underage go away");
    } 


    // This cose is just to check output you can ignore
    printf("\nEnter your age: ");
    scanf("%d", &age);
    return 0;
}