#include <cs50.h>
#include <stdio.h>
#include <string.h>

/* int main(void)
{
    string name = get_string ("Name: ");

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("Length: %i\n", n);
} */

// The above code is a common way to calculate the length of a string in C.
// It initializes a counter `n` to 0 and increments it
// until it reaches the null terminator (`'\0'`)
// that indicates the end of the string.
int main(void)
{
    string name = get_string ("Name: ");
    printf("%i\n", strlen(name));
}