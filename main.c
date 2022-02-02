#include <stdio.h>

int main() {

    // basic print statement
    printf("Hello world!\n");

    /* make constants by using const before type.
    use all caps naming convention*/
    const int HEIGHT = 163;
    int intA = 97;
    char targetChar;
    double targetDouble;

    /* insert vars into print statments using %[x]
    [x] representing the variable type */
    printf("My height is:\t%icm", HEIGHT);

    // type casting exists too, both implicitely and explicitly
    targetDouble = HEIGHT;
    targetChar = (char)intA;
    printf("\nThe value %i is %c in character form", intA, targetChar);

    return 0;    
}