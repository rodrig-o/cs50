#include <stdio.h>
#include <cs50.h>

int add(int a, int b);

int main(void)
{
    int x = get_int("a: ");
    int y = get_int("b: ");

    printf("%i\n", add(x, y));
}

int add(int a, int b)
{
    return a + b;
}
