#include <stdio.h>
#include <cs50.h>

/* int main(void)
{
    for (int i =0; i <3; i++)
    {
        printf("i is %i\n", i);
        printf("#\n");
    }
} */

void print_column(int height);

int main(void)
{
    int h = get_int("Height: ");
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}