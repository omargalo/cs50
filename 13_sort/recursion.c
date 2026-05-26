#include <cs50.h>
#include <stdio.h>

void draw(int height);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

// Using recursion to draw a pyramid of height n
void draw(int height)
{
    // Base case: if height is 0 or negative, do nothing
    if (height <= 0)
    {
        return;
    }

    // Print a pyramid of height n -1
    draw(height - 1);

    // Print one more row
    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
    printf("\n");
}