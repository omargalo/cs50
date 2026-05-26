#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number you want to find: ");

    // Linear search
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found %i at index %i\n", n, i);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}