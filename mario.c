#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int p;
    // do~while loop used to make sure the user's input is
    // part of the requested interval (n >= 1 && n <= 8).
    do
    {
        // codes for the pyramid's height input and print
        n = get_int("Select the height: ");
    }
    while (n < 1 || n > 8);

    //for each row
    for (int i = 0; i < n; i++)
    {
        //creating the spaces before #'s
        for (p = 1; p < (n - i); p++)
        {
            printf(" ");
        }
        //for each column
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // create new lines
        printf("\n");
    }
}
