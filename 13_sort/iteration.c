#include <cs50.h>
#include <stdio.h>

void draw(int height);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

// Using iteration to draw a pyramid of height n
void draw(int height)
{
    // iterate over each row
    for (int i = 0; i < height; i++)
    {
        // For each column of pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}