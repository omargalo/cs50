#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");


    if (strcmp(s, t) == 0)
    {
        printf("s and t are equal\n");
    }
    else
    {
        printf("s and t are not equal\n");
    }

    printf("s: %p\n", s);
    printf("t: %p\n", t);
}