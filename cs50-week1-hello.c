#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for user's name
    string name = get_string("What is your name? ");

    // Say hello to user
    printf("hello, %s/n", name);
}
