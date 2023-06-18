/*
    Arrays are special veraibles that can hold more than one value under the same variable name, organised with an index. Arrays are defined
    using a very straightforwards syntax.

    int numbers[10];

    Accessing a number from the array is done uysing the same syntax. Notice that arrays in C are zero-basedk, which means that  if we defined an
    array of size 10m, then the array cells 0 though 9 (inclusive) are defined. numbers[10] is not an actual value.


    int numbers[10];

    Populate the array
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    numbers[7] = 80;
    numbers[8] = 90;
    numbers[9] = 100;

    printf("The 7th number in the array is %d", numbers[6]);

    Arrays can only have one type of variable, because they are implemented as a sequence of values in the computers memory.
    Because of that accessing a specific array cell is very efficient.

    grades variable is missing in below code
    one of the grades is missing. Can you define it so the grade average with be 85>
*/
#include<stdio.h>

// Main entry method
int main(){

    int grades[3];
    int average;

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2])/3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}