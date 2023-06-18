/*
    While loops are similar to For loops but have less functionality
    A while loop continues executing the while block as long as the condition in the while remains true. For example, the following code will execute exactly 10 times

    int n = 10;

    while(n < 10) {
        n++;
    }

    while loops can execute infinitely if a condition is given which alwsays evaluates as true (non-zero)

    while(1){
        // Do something
    }

    // Loops directions
    - there are two important loop directives that are used in conjunction with all loop types in C - the break and continue directives
    - the break directive halts a loop after 10 loops, even though the while loop never finishes

    int n = 10;
    while(1){
        nn+;

        if(n == 10){
            break;
        }
    }

    - in the following code block thje continue directive causes the printf command to be skipped, so that only even numbers are printed out.,

    int n = 0;
    while(n < 10) {
        n++;

        // check that n is odd
        if(n % 2 == 1) {
            continue;
        }

        printf("The number %d is even.\n", n);
    }

    // Exercise
    the array variable consist s of a sequence of ten numbers. inside the while loop you must write two if conditions, which change the flow of the loop in the following manner.
    - If the current number is about to be printed is less than 5, don't print. 
    - If the cuirrent number is about to be printed is greater than 10, don't print it and  stop the loop.

*/
#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {

        int val = array[i];
        i++;

        if(val < 5){
            continue;
        } else if (val > 10){
            break;
        }

        printf("%d\n", val);
    }

    return 0;
}