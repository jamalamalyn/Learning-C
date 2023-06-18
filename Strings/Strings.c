/*
    // Character string array with a pointer (advanced explained later)
    // Only for reading, if we wish to define a string whcih can be manipulated, we will to define it as a local character array
    char * name = "John Smith";

    // Local character array, notation is different because it allocates an array variable so we can manipulate it. The empty brackets tells the compiler to calculate the side of 
    // the array automatically. this is the same as allocating it explicitly, addong one to the length of the string:
    char name[] = "John Smith";
    is same as:
    char name[11] = "John Smith"; // number of characters including end character = length + 1

    // Printf
    char * name = "Jophn Smith";
    int age = 27;

    printf("%s is %d years old.\n", name, age);

    Notice t hat when printing strings we must add a newline character so that our next printf statement will print a new line.

    strlen
    char * name = "Nikhil";
    printf("%d\n", strlen(name));

    // String comparison
    strncmp compares two strings, returning the number of 0 if they are equal or a different number if they are different. The arguments are the two strings
    to be compared, and the maximum comparison length. There is also an unsafe version of this called strcmp, but it is not recomended to use it.

    char * name = "John";

    if(strncmp(name, "John", 4) == 0){
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

    // String concatenation
    The function strncat appends the first n characters of source string to the destination string where n is min(n, lenght(src)); the arguemnts passed are destination string, 
    source string and n - maximum number of characters to be appended. For example.
    char dest[20] = "Hello";
    char src[20] = "World";
    strncat(dest, src, 3);
    printf("%s\n", dest);
    strncat(dest, src, 20);
    printf("%s\n", dest);

    // Activity
    - Define the string first_name with the value John using the pointer notation and define the string last_name with the value Doe using the local array notation
*/
#include <stdio.h>
#include <string.h>
int main() {

    char name[100];
    char const * first_name = "John";
    char last_name[] = "Doe";

    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    name[0]='\0';
    strncat(name,first_name,4);
    strncat(name,last_name,20);
    printf("%s\n",name);

    return 0;
} 