/*
    Exercise is to output sum of 3 variables.

    The different types of variables define their bounds. A char can range only from -128 and 127, whereas a long
    can range from -2,147,438,648 and 2,147,438,648.
    These numbers can be different on 64bit computers.

    C has no boolean type.

    int foo;
    int bar = 1;

    foo can be used but since we did not initialize it, we don't know wahts in it. the variable  bar contains the number 1.

    Now lets do some math

    int a = 0, b =1, c = 2, d = 3, e = 4
    a = b - c + d * e;
    printf(a);
    printf("%d", a);
*/

#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  sum = a + b + c;

  printf("The sum of a, b, and c is %f.", sum);
  return 0;
}