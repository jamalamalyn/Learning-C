/* Conditions

    In life we have to make decisions. In order to make a decision we weight out our options and so do our programs.

    Here  is the general form of the decision making structures found in C.

    int target = 10;
    if(target == 10){

        printf("Target is equal to 10");
    }

    The if statement

    the if statement allows us to check if an expression is true or false, and execute different code according to the result

    To evaluate whether two variables are equal, the == operator is used, just like in the first example.

    Inequality operators can also be used to evaluate expressions. For example:

    int foo = 1;
    int bar = 2;

    if(foo < bar){
        printf("foo is smaller than bar.");
    }

    if(foo > bar){
        printf("foo is greater than bar.");
    }

    We can use the else keyword to execute code when our expression evaluates to false
    if(foo < bar){
        printf("foo is smaller than bar.");
    } else {
        printf("foo is greater than bar.");
    }

    if(foo < bar){
        printf("foo is smaller than bar.");
    } else if(foo == bar){
        printf("foo is equal to bar.");
    } else {
        printf("foo is greater than bar.")
    }

    You can nest if else statements

    you can use multiple expressions
    &&, ||, !=

 */
#include <stdio.h>
#include <string.h>

void guessNumber(int guess) {

    char const * msg;

    if(guess == 555){
        msg = "Correct. You guessed it!";
    } else if(guess < 555){
        msg = "Your guess is too low.";
    } else {
        msg = "Your guess is too high.";
    }

    printf("%s\n",msg);
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

    return 0;
}