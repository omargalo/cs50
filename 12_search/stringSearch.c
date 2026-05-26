#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String you want to find: ");

    // Linear search using strcmp to compare strings
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found %s at index %i\n", s, i);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}