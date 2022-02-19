#include <stdio.h>

int main(int argc, char const *argv[])
{
    // structures are like objects
    struct Person {
        char firstName[25];  // use a fullstop before the type
        char lastName[40];   // to make it unordered
        int age;
    };
    
    struct Person person1 = {"Ada", "Lovelace", 28};
    struct Person person2 = {"Marie", "Curie", 44};

    // use dot notation to access and modify contents
    person1.age = 28;
    printf("%c\n", person1.firstName);

    // you can make pointers to structs...
    struct Person* person1Pointer = &person1;
    struct Person* person2Pointer = &person2;

    // use dereferencing and dot notation to access and modify contents
    (*person1Pointer).age++;
    // arrow notation can also be used too...
    person2Pointer->age += 10;

    // for function example
    struct Person myFriend = {"Martin", 57};
    struct Person myOtherFriend = {"Michelle", 27};

    myFriend = (myFriend, &myOtherFriend);


    return 0;
}

// you can also use structs in functions
struct Person ageOne(struct Person friend1, struct Person* friend2Pointer) {
  friend1.age++;
  friend2Pointer->age++;
  return friend1;
}