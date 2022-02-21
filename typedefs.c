#include <stdio.h>

int main(int argc, char const *argv[])
{
    // using a typedef means you dont need to use "struct" when you declare the Person
    typedef struct {
        char name[100];
        int age;
    } Person;

    Person person1 = {"Ana Baily", 36};
    /* as opposed to:
    struct Person person1 = {}; */
    
    printf("%i\n", person1.age);

    return 0;
}
