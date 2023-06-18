/*
    In previous tutorials on Arrays we covered, well, arrays and how they work. The arrays we looked at where all one -dimensional, but
    C can create and use milti-dimensional arrays. Here is the general form of a multidiemsional array declaration:

    type name [size1][size2]...[sizeN]

    int foo[1][2][3];

     char vowels[2][5] = {
        {'a', 'e', 'i', o'', 'u'},   // vowels[0]
        {'a', 'e', 'i', o'', 'u'}    // vowels[1]
     };

     Simplest form is two-dimesional array. Two dimensional array is pretty mich a list of one-dimensional arrays. To declare a two-dimensional
     integer array of size [x][y], you would write something like this:

    type arrayNMame [x][y];

    Where type can be any C data type (int, char,, long, long long, double etc) and arrayName will be a  valid C identifier, or variable.
    2-D array can be considered a table which will have [x] number of rows and [y] number of columns. A 2D array a which contains three rows
    and four columns can be shown and thought about like this:
    *---*---*---*---*---*---*
    |0,0|0,1|0,2|0,3|0,4|0,5|
    *---*---*---*---*---*---*
    |1,0|1,1|1,2|1,3|1,4|1,5|
    *---*---*---*---*---*---*
    |2,0|2,1|2,2|2,3|2,4|2,5|
    *---*---*---*---*---*---*
    
    int val = a[0][5];

    Exercise / code below does the following

    - Declare grades as a two-dimensional array of integers
    - Complete the for loops by specifying their terminating conditions
    - Compute the average marks obtained in each subject
*/
#include <stdio.h>

int main() {

    float average;
    int i;
    int j;
    int subjects = 2;
    int students = 5;
    int grades[subjects][students];

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;
    
    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    for (i = 0; i < subjects; i++) {
        average = 0;
        for (j = 0; j < students; j++) {
            average += grades[i][j];
        }

        average /= students;
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}