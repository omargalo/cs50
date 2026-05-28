#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* int main(void)
{
    char *s = get_string("s: ");
    char *t = s;

    t[0] = toupper(*t);
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
 */

// This program demonstrates how to copy a string.
/* int main(void)
{
    char *s = get_string("s: ");
    // Allocate enough memory for a copy of s, including the null terminator.
    char *t = malloc(strlen(s) + 1);

    // Copy s into t, character by character, including the null terminator.
    for (int i =0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // Capitalize the first character of t.
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    // Free the memory allocated for t.
    free(t);
} */

int main(void)
{
    char *s = get_string("s: ");
    // Check if get_string returned NULL, indicating that the user provided no input.
    if (s == NULL)
    {
        return 1;
    }
    // Allocate enough memory for a copy of s, including the null terminator.
    char *t = malloc(strlen(s) + 1);
    // Check if malloc returned NULL, indicating that the system was unable to allocate enough memory.
    if (t == NULL)
    {
        return 1;
    }

    // Copy s into t, including the null terminator.  
    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Capitalize the first character of t.
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    // Free the memory allocated for t.
    free(t);
}

