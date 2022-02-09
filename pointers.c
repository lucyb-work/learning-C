#include <stdio.h>

int main() {
    /* syntax of pointer:
        dataType* nameOfPointer;
        dataType *nameOfPointer; */
    double dblVar = 20.20;
    double* dblPtr;

    // & just means 'address of'
    dblPtr = &dblVar;
    printf("%p\n", dblPtr); // print address of dblVar
    printf("%p\n", &dblVar); // identical to above

    // use *pointer to dereference it
    printf("%f\n", dblVar); // prints contents of dblVar
    printf("%f\n", *dblPtr); // identical to above

    // so we can edit vars using just pointers!
    *dblPtr = 1.1;
    printf("%f\n", dblVar); // prints contents of dblVar
    printf("%f\n", *dblPtr); // identical to above

    // hey, this is neat!
    printf("%f\n", dblPtr); // no need to deref!

    /* you can only add/subtract ints to pointers
    adding to a pointer moves the pointer by n*(size of data type in bytes)
    For example, if a pointer to an int, the size of which is four bytes, 
        initially contains address 100, and three is added to the pointer, 
        the pointer will now point to address 112 */
    dblPtr += 5;
    printf("%p\n", dblPtr);
    dblPtr -= 5;

    // we can also point to array contents
    int arr[10] = {2, 4, 7, 1, 10, 3, 11, 6, 20, 5};
    int* ptr = &arr[0]; // Pointer to the first element
    
    for(int i = 0; i < 10; i++){
        *ptr = 3; // Dereference the pointer and assign the value at the ptr address to three
        ptr++; // Increment the pointer to point to the next int in the array
    }
    
    for(int i = 0; i < 10; i++){
        printf("%i",arr[i]);
    }

    // malloc(), calloc() and free(), etc, have not been covered
    // will cover it when i finish the course
}