#include <stdio.h>

int foo(int bar);
void moo();
void print_big(int number);

int main()
{
    printf("The value of foo is %d\n", foo(1));
    moo();

    int array[] = {1, 11, 2, 22, 3, 33};
    int i;
    for (i = 0; i < 6; i++)
    {
        print_big(array[i]);
    }
}

int foo(int bar)
{
    return bar + 1;
}

void moo()
{
    printf("The cow goes moo\n");
}

void print_big(int number)
{
    if (number > 10)
    {
        printf("%d is big\n", number);
    }
}