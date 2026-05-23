#include <cs50.h>
#include <stdio.h>

// Function prototype
void meow(int times);

int main(void)
{
    int n;
    do 
    {
        n = get_int("How many times do you want me to meow? ");
    }
    while (n <= 0);

    meow(n);
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow\n");
    }
}