#include <stdio.h>

int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int sum = 0;
int factorial = 1;
int i;

int main() {
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    printf("Sum of the array is %d\n", sum);

    for (i = 0; i < 10; i++) {
        factorial *= array[i];
    }

    printf("10 factorial is %d.\n", factorial);
}