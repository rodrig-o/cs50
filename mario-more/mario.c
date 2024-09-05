
# include <cs50.h>
# include <stdio.h>

int height = 0;

int main(void)
{
    do {
        height = get_int("whats the pyramid height? ");
    }
    while(height <= 0);

    for(int i = 0; i < height; i++)
    {
        int blank = height - i -1;

        for(int k = 0; k < blank; k++)
        {
            printf(" ");
        }
        for(int j = 0; j <= i ; j++)
        {
            printf("#");
        }
        printf("  ");
        for(int j = 0; j <= i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
