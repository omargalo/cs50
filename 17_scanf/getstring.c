#include <stdio.h>
#include <string.h>

int main(void)
{
    // Declare a character array to store the input string
    char *s;
    printf("Enter a string: ");
    // Use scanf to read a string from the user
    scanf("%s", s);
    // Print the entered string
    printf("You entered: %s\n", s);
    return 0;
}