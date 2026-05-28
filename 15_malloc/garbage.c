#include <stdio.h>

int main(void)
{
    // This program has no memory errors, but it does have a logic error:
    int scores[1024];
    // We forgot to initialize the array, so it contains garbage values.
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}