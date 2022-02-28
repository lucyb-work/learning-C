#include <stdio.h>

// This outputs the size of a file in bytes and provides a help string if no file is specified

int main(int argc, char **argv) {
    if (argv[1]) {  // is there an argument?
        FILE *input = fopen(argv[1], "r");
        int charInt;
        int binCount = -1; // accounting for EOF

        while (!feof(input)) {
            charInt = fgetc(input);
            binCount++;
        }
        printf("The size of %s is %d", argv[1], binCount);
        fclose(input);
    }
    else { 
        printf("Please enter a file name. Usage:\n./a.out [FILENAME]");
    }

    return 0;
}
