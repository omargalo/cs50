#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // If s[i] is lowercase
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        // If s[i] is not lowercase
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
} */

// Better solution using toupper() function from ctype.h library
int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // toupper() function converts s[i] to uppercase
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}