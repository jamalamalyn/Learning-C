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