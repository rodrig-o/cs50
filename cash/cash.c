#include <stdio.h>
#include <cs50.h>

int remain, coins, change = 0;

int main(void)
{
    do {
        change = get_int("Change owned: ");
        if (change > 0)
        {
            remain = change;
        }
    }
    while (change <= 0);

    while (remain >= 25)
    {
        remain = remain - 25;
        coins++;
    }
    while (remain >= 10)
    {
        remain = remain - 10;
        coins++;
    }
    while (remain >= 5)
    {
        remain = remain - 5;
        coins++;
    }
    while (remain >= 1)
    {
        remain = remain - 1;
        coins++;
    }
    printf("%i\n", coins);
}
