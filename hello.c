#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // the following line will ask the user's name
    string name = get_string("What's your name? ");
    // the following line will print hello + user's name
    printf("hello, %s\n", name);
}
