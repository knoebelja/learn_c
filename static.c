#include <stdio.h>

int runner()
{
    static int count = 0;
    count++;
    return count;
}

static void fun(void)
{
    printf("I'm a static function.\n");
}

int sum(int num)
{
    static int s = 0;
    s += num;
    return s;
}

int main()
{
    printf("%d\n", runner());
    printf("%d\n", runner());
    fun();
    printf("%d\n", sum(55));
    printf("%d\n", sum(45));
    printf("%d\n", sum(35));
}