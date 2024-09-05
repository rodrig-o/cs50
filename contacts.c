# include <cs50.h>
# include <stdio.h>

int main(void)
{
    string name = get_string("What's your first name? ");
    string last = get_string("What's your last name? ");
    int number = get_int("What's your phone number? ");
    int age = get_int("What's your age? ");
    //string full_name = name + " " + last;

    printf("Hi %s %s, nice to meet you!\n", name, last);
    printf("Your phone number is %i ", number);
    printf("and you are %i years old.\n", age);
}
