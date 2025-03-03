#include <stdio.h>

int main()
{
    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did amazing good job!");
        break;
    case 'B':
        printf("You did alright");
        break;
    case 'C':
        printf("Um not bad you can do better");
        break;
    case 'D':
        printf("You need to study more to improve");
        break;
    case 'E':
        printf("Come see me after class to look why you arnt doing well");
        break;
    case 'F':
        printf("You failed my class dont come back you stupid shrimp");
        break;
    
    default:
        printf("Invalid input Letter grade only");
        break;
    }

}