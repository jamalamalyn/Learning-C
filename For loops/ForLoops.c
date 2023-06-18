/* 

    For loops in C are straightforward. they supply the ability to create a loop - a code block that runs multiple times. For loops require an iterator variable, notated as i.
    For loops give the following func:
    - init iterator var using an init value
    - chekc if the iterator has reached its final value
    - increase iterator

    int i;
    for(i=0; i < 10; i++) {
        printf("%d\n", i);
    }

    This block will print the numbers 0 through 9

    For loops can iterate on array values, for example if we want toi sum all the values of an array, we would use the iterator i as the array index.
    int array[n] = {1, 2, 3 ... , n};
    int sum = 0;
    int i;

    for(i = 0; i < 10; i++) {
        sum += array[i];
    }

    printf("Sum of the array is %d\n", sum);


    // Exercise
    - Calculate the factorial (multiplication of all items array[0] to array[9], inclusive), of the variable array.
 */
#include <stdio.h>

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;
    int i;

    /* calculate the factorial using a for loop  here*/
    for(i = 0; i < 10; ++i) {

        factorial = array[i] * factorial; 
    }

    printf("10! is %d.\n", factorial);

    return 0;
}