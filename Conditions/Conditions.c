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