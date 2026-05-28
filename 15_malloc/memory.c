// Demostrates memory errors via valgrind
#include <stdio.h>
#include <stdlib.h>

// This program has two memory errors:
/* int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
} */

// This program has no memory errors:
int main(void)
{
    int *x = malloc(3 * sizeof(int));
    if (x == NULL)
    {
        return 1;
    }
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
    return 0;
}

// valgrind ./memory