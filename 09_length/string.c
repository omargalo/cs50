#include <cs50.h>
#include <stdio.h>
#include <string.h>

/* int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
} */

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    // We can call strlen(s) once and store it in a variable
    // to avoid calling it multiple times in the loop
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}