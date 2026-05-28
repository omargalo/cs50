// Fails to swap two integers
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

// This function attempts to swap the values of a and b,
// but it only swaps the local copies of a and b within
// the function. The original variables x and y in main()
// remain unchanged. To actually swap the values of x and y,
// you would need to pass pointers to the variables or
// return the swapped values from the function.

/* void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
} */

// The correct way to swap two integers in C is to
// use pointers.
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}