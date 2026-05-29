#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    // Static array
   /*  int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3; */

    // Dynamic array
    // We can use malloc to allocate memory for an array at runtime
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes
    int *tmp = realloc(list,4 * sizeof(int));
    if (tmp == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free(list);
        return 1; // Exit with an error code
    }

    tmp[3] = 4;

    free(list); // Free the old array
    list = tmp; // Point to the new array

    // Free the old array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Don't forget to free the allocated memory
    free(list);
    return 0;
}
