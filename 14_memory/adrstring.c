#include <cs50.h>
#include <stdio.h>

/* int main(void)
{
    string s = "HI!";

    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
} */

/* int main(void)
{
    // string is just a char *, so we can use char * instead of string
    char *s = "HI!";

    printf("%s\n", s);
} */

int main(void)
{
    char *s = "HI!";

    printf("%c\n", *s);
    // s + 1 is the same as &s[1]
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}