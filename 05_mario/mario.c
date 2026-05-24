#include <cs50.h>
#include <stdio.h>

void print_block(int height);
void print_pyramid(int height);
void print_reversed_pyramid(int height);

int main(void)
{
    const int HEIGHT = 5;
    // For each row
    print_block(HEIGHT);
    printf("\n");
    print_pyramid(HEIGHT);
    printf("\n");
    print_reversed_pyramid(HEIGHT);
}

void print_block(int height)
{
    // For each row
    for(int row = 0; row < height; row++)
    {
        // For each column
        for(int column = 0; column < height; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void print_pyramid(int height)
{
    // For each row
    for(int row = 0; row < height; row++)
    {
        // For each column
        for(int column = 0; column < height; column++)
        {
            if(column < height - row - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}

void print_reversed_pyramid(int height)
{
    // For each row
    for(int row = 0; row < height; row++)
    {
        // For each column
        for(int column = 0; column < height; column++)
        {
            if(column <= row)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}