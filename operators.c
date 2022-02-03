#include <stdio.h>

int main() {
    // standard operators apply, including things like += or /=
    // modulo is standard % sign

    // it's also possible to use shorthand for ++ or -- operators
    int n = 13;
    int m = 10;
    m--;
    n++;
    printf("m = %d\n", m);
    printf("n = %d\n", n);

    // logical operators: &&=and, ||=or, !()=not
    int a = 2;
    int b = 3;
    if (a == b && a == 2) {
    printf("both are true\n");
    }
    if (a == b || a == 2) {
    printf("one or both are true\n");
    }
    if (!(a == b)) {
    printf("they are not equal\n");
}

    // also, C follows stanrad bidmas rules, with ++/-- being top priority

    return 0;
}