#include <cs50.h>
#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h = get_int("Height: ");
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)    // type $ debug50 ./buggy
    printf("#\n");                      // check code line by line with
}                                       // commands like step over, step in
