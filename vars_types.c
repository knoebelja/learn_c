#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;

    sum = a + b + c;

    printf("The sum of a, b, c is %f.", sum);
    return 0;
}