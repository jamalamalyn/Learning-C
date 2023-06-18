/*
    Going to print "This is the beginning of my low-level journey."
*/

#include <stdio.h>

int main() {
    // Lets declare a string, as strings are arrays of chars in C, this includes a pointer which is advanced learning.
    char const * name = "Hello, World!";
    
    printf(name);
    return 0;
}