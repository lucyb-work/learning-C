#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // some spicy number functions
    int negative = -5;
    // abs() - returns absolute value
    printf("%i", abs(negative));
    // ceil() - returns the roundup of a num
    double decimal = 3.1;
    printf("%i", ceil(decimal));
    // log(), toupper() and isupper() is obvious

    //random numbers:
    srand(time(NULL)); // ensures random number at each runtime point
    int randomNumber = rand() % 20 + 1; // random number between 1 and 20
    printf("%i", randomNumber);

    /* Declaring a function:
    returnType functionName (type1 parameter1, type2 parameter2) { 
        code
        return output
    } */
    printMyFavoriteAnimal();

    return 0;
}

void printMyFavoriteAnimal(void) {
  printf("My favorite animal is a cat\n");
}