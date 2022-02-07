# include <stdio.h>
# include <string.h> // for strlen()

int main(int argc, char const *argv[])
{
    /* strings are just arrays of chars
    this can be demonstrated in a very literal sense, with a null terminator at the end: */
    char comp[] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'};
    
    // this is called a string literal
    char compCode[] = "Computer Code";
    
    // they both still print nicely
    printf("%s\n%s\n", comp, compCode);     
    
    /* strings cannot be extended
    they cannot have char deleted either
    but they can be edited like an array */
    char p[] = "procezzor";
    
    printf("%c", p[2]);
    
    p[5] = 's';
    p[6] = 's';
    printf("%s", p);

    // strlen() returns length of string 
    char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
    char x[] = "poolloop";  

    for (int i = 0; i < strlen(s); i++) {
        s[i] = '*';
    }
    printf("%s\n", s);

    for (int i = 0; i < strlen(x)/2; i++) {
        x[i] = '#';
    }
    printf("%s", x);

    // concatinate strings with strcat(original, stringToAppend)
    strcat(p, x);
    printf("%s\n", s);

    // copy strings with strcpy(empty, strToCopy)
    int destinationLen = strlen(x) + 1; // account for \0
    char destination[destinationLen];
    strcpy(destination, x);
    printf("%s", destination);


    return 0;
}
