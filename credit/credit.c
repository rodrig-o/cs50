#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // Prompt for input
    long card_number = get_long("Number: ");  // Use long for large credit card numbers

    char str_number[20];  // Buffer large enough to hold the integer as a string
    // Convert integer to string using sprintf
    sprintf(str_number, "%ld", card_number);

    int number_length = strlen(str_number);

    // Buffers for storing even and odd digits
    char evens[20] = "";  // Initialize empty strings
    char odds[20] = "";

    // Calculate checksum
    for (int i = 0; i < number_length; i++)
    {
        // Get the current digit (starting from the right side)
        char current_digit = str_number[number_length - 1 - i];

        // Separate evens and odds based on the position from the right (0-based index)
        if (i % 2 == 0)
        {
            strncat(odds, &current_digit, 1);  // Add to odds
        }
        else
        {
            strncat(evens, &current_digit, 1);  // Add to evens
            // Double the even digit and add it to evens_doubled
            int doubled_digit = (current_digit - '0') * 2;
            char doubled_digit_str[2];
            sprintf(doubled_digit_str, "%d", doubled_digit);
            strncat(evens_doubled, doubled_digit_str, strlen(doubled_digit_str));
        }
    }

    // Print results
    printf("odds: %s\nevens: %s\nevens_doubled: %s\n", odds, evens, evens_doubled);

    // multiply each digit from odds by 2 and add to a new string the values next to each other
}
